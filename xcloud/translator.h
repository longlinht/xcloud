#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#include <QTranslator>
#include <QLocale>
#include <QApplication>
class Translator {
public:
    static void load(QLocale::Language lang,QApplication &a);
private:
    Translator();
    static QTranslator tran;
};

#endif // TRANSLATOR_H
