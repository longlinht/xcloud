
#include <QApplication>
#include "db.h"
#include <QDir>
#include "paths.h"
#include "log.h"
#include "translator.h"
#include "util.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qDebug()<<QSslSocket::supportsSsl();

    QNetworkAccessManager nam;
    QSslConfiguration config;
    config.setPeerVerifyMode(QSslSocket::VerifyNone);
    config.setProtocol(QSsl::SslV3);

    QString addr("https://cloud.shinewonder.com//shinecloud/ActionServlet");
    //QString addr("http://www.baidu.com");

    QUrl url(addr);
    QNetworkRequest request(url);
    request.setSslConfiguration(config);



/*
    //QNetworkReply *reply = nam.post(request,);
    //QNetworkReply *reply = nam.get(request);

    QEventLoop eventLoop;
    QObject::connect(reply,SIGNAL(finished()),&eventLoop,SLOT(quit()));
    eventLoop.exec();

    int i = reply->error();
    QString error = reply->errorString();

    QString result = reply->readAll();

    qDebug()<<"Error: "<<i;
    qDebug()<<"Result: "<<result;
*/
    return a.exec();
}
