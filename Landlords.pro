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
    singleton.cpp \
    logger.cpp

HEADERS += \
        gamepanel.h \
    card.h \
    cardpanel.h \
    cards.h \
    player.h \
    singleton.h \
    spdlog/async.h \
    spdlog/async_logger.h \
    spdlog/async_logger-inl.h \
    spdlog/common.h \
    spdlog/common-inl.h \
    spdlog/formatter.h \
    spdlog/fwd.h \
    spdlog/logger.h \
    spdlog/logger-inl.h \
    spdlog/mdc.h \
    spdlog/pattern_formatter.h \
    spdlog/pattern_formatter-inl.h \
    spdlog/spdlog.h \
    spdlog/spdlog-inl.h \
    spdlog/stopwatch.h \
    spdlog/tweakme.h \
    spdlog/version.h \
    logger.h

FORMS += \
        gamepanel.ui
