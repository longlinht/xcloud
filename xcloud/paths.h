#ifndef PATHS_H
#define PATHS_H

#include <QString>

class Paths {
public:
    static void initPaths();
    static QString applicationPath();
    static QString useDataPath();
    static bool createDataDirectory();
    static QString databasePath();
    static QString jobDataPath();
    static QString cachePath();
    static QString tempPath();
    static QString helpPath();
    static QString translationPath();
    static QString configPath();

private:
    Paths();
    static QString appPath;
    static QString dataPath;
};


#endif // PATHS_H
