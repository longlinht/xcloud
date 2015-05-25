#ifndef SCC_H
#define SCC_H

#include <QWidget>
#include <QString>
#include <QLocale>

class XCloud {
public:

    XCloud();
    ~XCloud();

    void startup();

    static bool globalInit(QApplication &a);

    static QString getVersion();
    static QString getClientId();
    static QString getHardwareId();
    static QLocale::Language getLang();


private:
    QWidget *login;
    QWidget *main;
    static QString version;
    static QString clientId;
    static QString hardwareId;
    static QLocale::Language lang;
};

#endif // SCC_H
