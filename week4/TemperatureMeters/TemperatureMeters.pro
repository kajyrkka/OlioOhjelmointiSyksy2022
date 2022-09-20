TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        basicmeter.cpp \
        finemeter.cpp \
        heater.cpp \
        housecontroller.cpp \
        main.cpp

HEADERS += \
    basicmeter.h \
    finemeter.h \
    heater.h \
    housecontroller.h
