#include "paths.h"
#include <QDir>
#include <QApplication>

QString Paths::appPath;
QString Paths::dataPath;

Paths::Paths(){

}

void Paths::initPaths(){
    appPath = QApplication::applicationDirPath();
    dataPath = QDir::homePath() + QString("/SCC");
}

QString Paths::applicationPath(){
    return appPath;
}

QString Paths::useDataPath(){
    return dataPath;
}

QString Paths::jobDataPath(){
    return dataPath + QString("/NewJobs");
}

QString Paths::databasePath(){
    return dataPath + QString("/db");
}

QString Paths::cachePath(){
    return dataPath + QString("/cache");
}

QString Paths::tempPath(){
    return dataPath + QString("/temp");
}

QString Paths::helpPath(){
    return dataPath + QString("/help");
}

QString Paths::translationPath(){
    return appPath + QString("/i18n");
}

QString Paths::configPath(){
    return dataPath + QString("/scc.ini");
}


bool Paths::createDataDirectory(){
    QDir dpath(dataPath);
    if(dpath.exists())
        return true;
    if(!dpath.mkpath(dataPath))
        return false;

    QString jpath = jobDataPath();
    if(!dpath.mkdir(jpath))
        return false;

    QString dbpath = databasePath();
    if(!dpath.mkdir(dbpath))
        return false;

    QString cpath = cachePath();
    if(!dpath.mkdir(cpath))
        return false;

    QString tpath = tempPath();
    if(!dpath.mkdir(tpath))
        return false;
    return true;
}
