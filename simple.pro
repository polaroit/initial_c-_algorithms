QT += core
QT -= gui

CONFIG += c++11

TARGET = simple
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    algo.cpp

HEADERS += \
    algo.h
