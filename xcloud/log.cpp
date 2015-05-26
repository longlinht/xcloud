#include "log.h"
#include <QTextStream>
#include "util.h"

QFile* Logger::file = NULL;
Logger::logverb Logger::verb = Logger::LOG_INFO;


bool Logger::init(logverb v){
    verb = v;
    file = new QFile("xcloud.log");
    return file->open(QIODevice::WriteOnly | QIODevice::Append);
}

void Logger::log(logverb v, QString msg){
    if(file->size() >= maxlog){
        file->close();
        file->rename("xcloud.log","scc" + Util::timeNumberSerial() + ".log");
        close();
        init(verb);
    }

    if(v > verb) return;

    QTextStream ts(file);
    switch (v) {
    case LOG_INFO:
        ts<<Util::currentFormatTime()<<" LOG_INFO: "<<msg<<endl;
        break;
    case LOG_CRITICAL:
        ts<<Util::currentFormatTime()<<" LOG_CRITICAL: "<<msg<<endl;
        break;
    case LOG_WARN:
        ts<<Util::currentFormatTime()<<" LOG_WARN: "<<msg<<endl;
        break;
    case LOG_ERROR:
        ts<<Util::currentFormatTime()<<" LOG_ERROR: "<<msg<<endl;
        break;
    default:
        break;
    }
    ts.flush();
}

void Logger::close(){
    if(NULL == file) return;
    delete file;
    file = NULL;
}

