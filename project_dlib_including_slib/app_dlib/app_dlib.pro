QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui


win32: LIBS += -L$$PWD/../dlib/ -ldlib

INCLUDEPATH += $$PWD/../dlib
DEPENDPATH += $$PWD/../dlib
