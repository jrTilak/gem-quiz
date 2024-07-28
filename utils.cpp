#include "utils.h"
#include <QFile>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDebug>
#include <QDir>
#include <QFileInfo>


// Constructor implementation (can be empty if not needed)

Utils::Utils() {}

// Static function to check if a file exists
bool Utils::fileExists(const QString& filePath) {
    QFile file(filePath);
    return file.exists();
}

// Static function to write QVector<QuizItem> to a JSON file
void Utils::writeQuizItemsToJson(const QString& filePath, const QVector<QuizItem>& quizItems) {
    // Ensure the directory exists
    QFileInfo fileInfo(filePath);
    QDir dir = fileInfo.dir();
    if (!dir.exists()) {
        qDebug() << "Directory does not exist. Creating:" << dir.path();
        if (!dir.mkpath(".")) {
            qWarning() << "Failed to create directory:" << dir.path();
            return;
        }
    }

    QJsonArray jsonArray;
    for (const QuizItem& item : quizItems) {
        jsonArray.append(item.toJson());
    }
    QJsonDocument jsonDoc(jsonArray);
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly)) {
        qWarning() << "Couldn't open save file:" << filePath << file.errorString();
        return;
    }
    file.write(jsonDoc.toJson());
    file.close();
}

QStringList Utils::getFileNames(const QString &folderPath)
{
    QDir directory(folderPath);
    QStringList files = directory.entryList(QDir::Files);
    return files;
}

QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> Utils::readFolderAndGetFileData(const QString& folderPath) {
    QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> fileDataArray;
    QDir directory(folderPath);
    QStringList files = directory.entryList(QDir::Files);

    for (const QString& fileName : files) {
        QString filePath = folderPath + "/" + fileName;
        QFile file(filePath);
        if (!file.open(QIODevice::ReadOnly)) {
            qWarning() << "Couldn't open file:" << filePath << file.errorString();
            continue;
        }

        QString fileContent = file.readAll();
        file.close();

        QVector<QuizItem> quizItems;
        QJsonDocument jsonDoc = QJsonDocument::fromJson(fileContent.toUtf8());
        if (jsonDoc.isArray()) {
            QJsonArray jsonArray = jsonDoc.array();
            for (const QJsonValue& value : jsonArray) {
                if (value.isObject()) {
                    QJsonObject jsonObject = value.toObject();
                    QuizItem quizItem("", QStringList(), 0);
                    quizItem.fromJson(jsonObject);
                    quizItems.append(quizItem);
                }
            }
        }

        fileDataArray.append(qMakePair(fileName, qMakePair(fileContent, quizItems)));
    }

    return fileDataArray;
}
