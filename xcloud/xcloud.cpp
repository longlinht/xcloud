#include "scc.h"
#include "translator.h"
#include "paths.h"
#include "log.h"
#include "db.h"
#include "util.h"

QString CloudClient::version;
QString CloudClient::clientId;
QString CloudClient::hardwareId;
QLocale::Language CloudClient::lang = QLocale::English;

CloudClient::CloudClient():login(NULL),main(NULL){

}

CloudClient::~CloudClient(){
    if(login != NULL)
        delete login;
    if(main != NULL)
        delete main;
}

void CloudClient::startup(){

}

bool CloudClient::globalInit(QApplication &a){

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

QString CloudClient::getVersion(){
    return version;
}

QString CloudClient::getClientId(){
    return clientId;
}

QString CloudClient::getHardwareId(){
    return hardwareId;
}

QLocale::Language CloudClient::getLang(){
    return lang;
}
