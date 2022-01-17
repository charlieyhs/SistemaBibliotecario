QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    autorabc_dialog.cpp \
    dubasedatos.cpp \
    editorialabc_dialog.cpp \
    libroabc_dialog.cpp \
    libroconsultadialog.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    autorabc_dialog.h \
    dubasedatos.h \
    editorialabc_dialog.h \
    libroabc_dialog.h \
    libroconsultadialog.h \
    mainwindow.h

FORMS += \
    autorabc_dialog.ui \
    editorialabc_dialog.ui \
    libroabc_dialog.ui \
    libroconsultadialog.ui \
    mainwindow.ui

QMAKE_CXXFLAGS += -std=gnu++14






