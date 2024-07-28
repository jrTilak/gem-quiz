#ifndef UTILS_H
#define UTILS_H
#include "quizitem.h"
#include <QString>

class Utils
{
public:
    // Constructor
    Utils();

    // Static function to check if a file exists
    static bool fileExists(const QString& filePath);

    static void writeQuizItemsToJson(const QString& filePath, const QVector<QuizItem>& quizItems);
    static QStringList getFileNames(const QString &folderPath);
    static QVector<QPair<QString, QPair<QString, QVector<QuizItem>>>> readFolderAndGetFileData(const QString& folderPath);
};

#endif // UTILS_H
