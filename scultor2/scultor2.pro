TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sculptor.cpp \
    figurageometrica.cpp \
    putvoxel.cpp \
    putsphere.cpp \
    putellipsoid.cpp \
    putbox.cpp \
    cutvoxel.cpp \
    cutsphere.cpp \
    cutellipsoid.cpp \
    cutbox.cpp

HEADERS += \
    sculptor.h \
    figurageometrica.h \
    putvoxel.h \
    putsphere.h \
    putellipsoid.h \
    putbox.h \
    cutvoxel.h \
    cutsphere.h \
    cutellipsoid.h \
    cutbox.h
