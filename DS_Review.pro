greaterThan(QT_MAJOR_VERSION, 4) {
    CONFIG += c++11
}
else {
    QMAKE_CXXFLAGS += -std=c++0x
}

win32 {
#    INCLUDEPATH += "C:/mylibs/extra headers"
}
unix {
#    INCLUDEPATH += "/home/user/extra headers"
}

SOURCES += \
    main.cpp \
    ctile.cpp \
    cplayer.cpp

HEADERS += \
    commondefs.hpp \
    ctile.h \
    cplayer.h
