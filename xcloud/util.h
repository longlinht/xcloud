#ifndef UTIL_H
#define UTIL_H
#include <QString>
#include <QLocale>

class Util {
public:
    static QString fetchSVNRev();
    static QString fetchHardwareId();
    static QLocale::Language fetchLang();
    static QString currentFormatTime();
    static QString timeNumberSerial();
};

#endif // UTIL_H
