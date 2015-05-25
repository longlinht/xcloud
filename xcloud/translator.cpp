#include "translator.h"
#include "paths.h"
#include "log.h"

QTranslator Translator::tran;

void Translator::load(QLocale::Language lang,QApplication &a){
    QString qmPath;
    switch (lang) {
    case QLocale::Chinese:
        Logger::log(Logger::LOG_INFO,"Chinese");
        qmPath = Paths::translationPath() + "/scc_zh.qm";
        tran.load(qmPath);
        a.installTranslator(&tran);
        break;
    case QLocale::Japanese:
        Logger::log(Logger::LOG_INFO,"Japanese");
        qmPath = Paths::translationPath() + "/scc_jp.qm";
        tran.load(qmPath);
        a.installTranslator(&tran);
        break;
    default:
        Logger::log(Logger::LOG_INFO,"Default");
        break;
    }
}
