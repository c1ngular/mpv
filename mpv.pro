QT += qml quick

HEADERS += mpv.h
SOURCES += mpv.cpp

QT_CONFIG -= no-pkg-config
CONFIG += link_pkgconfig debug
PKGCONFIG += mpv
TEMPLATE = lib
CONFIG += staticlib