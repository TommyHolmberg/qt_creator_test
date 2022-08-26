QT += testlib
QT -= gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

INCDIR_APP = ../app


INCLUDEPATH += \
    $$INCDIR_APP

SOURCES +=  \
    tst_basictest.cpp \
    $$INCDIR_APP/someclass.cpp

HEADERS += \
    $$INCDIR_APP/someclass.h


# include the classes from the main project:

