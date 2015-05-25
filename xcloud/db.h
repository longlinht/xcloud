#ifndef DB_H
#define DB_H

#include <QSqlDatabase>
#include <QSqlError>

class DatabaseManager {

public:
     static QSqlError init();
     static void close();

private:
    DatabaseManager();
    static QSqlError createTables();
    static QSqlDatabase db;
};

#endif // DB_H

