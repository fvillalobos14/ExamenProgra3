#-------------------------------------------------
#
# Project created by QtCreator 2016-06-19T21:07:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Examen
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cuenta.cpp \
    cuentapersonal.cpp \
    ahorroh.cpp \
    calculadora.cpp

HEADERS  += mainwindow.h \
    cuenta.h \
    cuentapersonal.h \
    ahorroh.h \
    calculadora.h

FORMS    += mainwindow.ui \
    calculadora.ui

RESOURCES += \
    assets.qrc
