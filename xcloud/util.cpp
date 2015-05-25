#include "util.h"
#include "log.h"
#include <QProcess>
#include <QDateTime>

QString Util::fetchSVNRev(){
    QString svnPath = "/Users/ht/Workspace/svn/scc";

    QProcess proc;
    proc.setWorkingDirectory(svnPath);

    QStringList args;
    args <<"-c" <<"svn info | grep \"Revision\" | awk '{print $2}'";
    proc.start("/bin/bash", args);
    proc.waitForFinished();

    return proc.readAll();
}

QString Util::fetchHardwareId(){
    QProcess proc;
    QStringList args;
    args << "-c" << "ioreg -rd1 -c IOPlatformExpertDevice |  awk '/IOPlatformUUID/ { print $3; }'";
    proc.start("/bin/bash", args);
    proc.waitForFinished();

    return proc.readAll();
}

QLocale::Language Util::fetchLang(){
    QLocale locale = QLocale::system();
    return locale.language();
}

QString Util::currentFormatTime(){
    return QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm::ss");
}

QString Util::timeNumberSerial(){
    return QDateTime::currentDateTime().toString("yyyyMMddhhmmss");
}
