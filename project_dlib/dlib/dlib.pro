QT -= gui

TEMPLATE = lib
DEFINES += DLIB_LIBRARY

CONFIG += c++11

SOURCES += \
    dlib.cpp

HEADERS += \
    dlib_global.h \
    dlib.h


win32: LIBS += -L$$PWD/../dlibsub/ -ldlibsub

INCLUDEPATH += $$PWD/../dlibsub
DEPENDPATH += $$PWD/../dlibsub
