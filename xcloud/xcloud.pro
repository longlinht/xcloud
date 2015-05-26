#-------------------------------------------------
#
# Project created by QtCreator 2015-05-13T14:41:46
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = xcloud
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    util.cpp \
    translator.cpp \
    preferences.cpp \
    paths.cpp \
    log.cpp \
    db.cpp \
	constants.cpp \
    xcloud.cpp

HEADERS  += mainwindow.h \
    util.h \
    translator.h \
    preferences.h \
    paths.h \
    log.h \
    db.h \
	constants.h \
    xcloud.h

FORMS    += mainwindow.ui
