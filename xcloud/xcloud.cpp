#include "xcloud.h"
#include "translator.h"
#include "paths.h"
#include "log.h"
#include "db.h"
#include "util.h"

QString XCloud::version;
QString XCloud::clientId;
QString XCloud::hardwareId;
QLocale::Language XCloud::lang = QLocale::English;

XCloud::XCloud():login(NULL),main(NULL){

}

XCloud::~XCloud(){
    if(login != NULL)
        delete login;
    if(main != NULL)
        delete main;
}

void XCloud::startup(){

}

bool XCloud::globalInit(QApplication &a){

    Logger::init(Logger::LOG_INFO);

    Paths::initPaths();
    if(!Paths::createDataDirectory()){
        Logger::log(Logger::LOG_ERROR,"Create data directory failed!");
        return false;
    }

    if(DatabaseManager::init().type() != QSqlError::NoError){
        Logger::log(Logger::LOG_ERROR,"Initilize databse failed!");
        return false;
    }

    lang = Util::fetchLang();

    Translator::load(lang,a);

    version = "0.9.14.6." + Util::fetchSVNRev();
    hardwareId = Util::fetchHardwareId();
    return true;
}

QString XCloud::getVersion(){
    return version;
}

QString XCloud::getClientId(){
    return clientId;
}

QString XCloud::getHardwareId(){
    return hardwareId;
}

QLocale::Language XCloud::getLang(){
    return lang;
}
