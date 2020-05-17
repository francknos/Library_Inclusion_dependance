QT -= gui

TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

SOURCES += \
    slib.cpp

HEADERS += \
    slib.h



win32: LIBS += -L$$PWD/../slibsub/ -lslibsub

INCLUDEPATH += $$PWD/../slibsub
DEPENDPATH += $$PWD/../slibsub

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../slibsub/slibsub.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../slibsub/libslibsub.a
