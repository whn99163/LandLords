#-------------------------------------------------
#
# Project created by QtCreator 2024-07-13T00:02:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Landlords
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
        main.cpp \
    card.cpp \
    cardpanel.cpp \
    cards.cpp \
    player.cpp \
    gamepanel.cpp \
    singleton.cpp

HEADERS += \
        gamepanel.h \
    card.h \
    cardpanel.h \
    cards.h \
    player.h \
    singleton.h

FORMS += \
        gamepanel.ui
