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




win32: LIBS += -L$$PWD/../slib/ -lslib

INCLUDEPATH += $$PWD/../slib
DEPENDPATH += $$PWD/../slib

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../slib/slib.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../slib/libslib.a
