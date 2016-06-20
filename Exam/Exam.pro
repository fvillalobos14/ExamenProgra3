#-------------------------------------------------
#
# Project created by QtCreator 2016-06-20T16:46:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Exam
TEMPLATE = app


SOURCES += main.cpp\
        principal.cpp \
    notepad.cpp

HEADERS  += principal.h \
    notepad.h

FORMS    += principal.ui \
    notepad.ui

RESOURCES += \
    assets.qrc
