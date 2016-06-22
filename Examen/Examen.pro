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
    configuracion.cpp \
    configuracion2.cpp \
    manejodecuentas.cpp \
    calc.cpp \
    simplecalculator.cpp \
    principal.cpp \
    notepad.cpp

HEADERS  += mainwindow.h \
    cuenta.h \
    cuentapersonal.h \
    ahorroh.h \
    configuracion.h \
    configuracion2.h \
    manejodecuentas.h \
    calc.h \
    simplecalculator.h \
    principal.h \
    notepad.h

FORMS    += mainwindow.ui \
    configuracion.ui \
    configuracion2.ui \
    manejodecuentas.ui \
    calc.ui \
    simplecalculator.ui \
    principal.ui \
    notepad.ui

RESOURCES += \
    resources.qrc
