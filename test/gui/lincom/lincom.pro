#-------------------------------------------------
#
# Project created by QtCreator 2010-07-15T18:29:26
#
#-------------------------------------------------

QT       += core gui

TARGET = lincom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    myinputpanel.cpp myinputpanelcontext.cpp \
    serialport.cpp

HEADERS  += mainwindow.h \
    myinputpanel.h myinputpanelcontext.h \
    serialport.h

FORMS    += mainwindow.ui myinputpanelform.ui

OTHER_FILES +=

RESOURCES +=
RC_FILE += myico.rc
