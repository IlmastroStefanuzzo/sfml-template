TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        game.cpp \
        main.cpp

unix:!macx: LIBS += -L$$PWD/lib/ -lsfml-graphics -lsfml-window -lsfml-system

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include

HEADERS += \
    game.h
