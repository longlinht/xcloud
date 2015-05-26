#include "db.h"
#include <QDir>

QSqlDatabase DatabaseManager::db = QSqlDatabase::addDatabase("QSQLITE");

DatabaseManager::DatabaseManager(){

}

QSqlError DatabaseManager::init(){
    QString path(QDir::homePath());
    path.append(QDir::separator()).append("xcloud.db");
    path = QDir::toNativeSeparators(path);

    QFile dbFile(path);
    if(dbFile.exists()){
        db = QSqlDatabase::database(path);
    }else{
        db.setDatabaseName(path);
    }
    if(!db.open())
        return db.lastError();
    return createTables();
}

void DatabaseManager::close(){
    db.close();
}

QSqlError DatabaseManager::createTables(){
    return db.lastError();
}


