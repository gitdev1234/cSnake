QT += core
QT -= gui

CONFIG += c++11

TARGET = cSnake
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    src/Game.cpp \
    src/Snake.cpp

HEADERS += \
    include/catch.hpp \
    include/Game.h \
    include/Snake.h \
    include/Types.h

INCLUDEPATH += include/
INCLUDEPATH += test/

DISTFILES += \
    docs/CPP_Styleguide.md
