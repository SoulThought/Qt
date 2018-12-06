INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

SOURCES += \
    $$PWD/normalprotocol.cpp \
    $$PWD/errorprotocol.cpp \
    $$PWD/chatprotocol.cpp \
    $$PWD/execnormalprotocol.cpp \
    $$PWD/execerrorprotocol.cpp \
    $$PWD/datapacket.cpp

HEADERS  += \
    $$PWD/normalprotocol.h \
    $$PWD/errorprotocol.h \
    $$PWD/chatprotocol.h \
    $$PWD/execnormalprotocol.h \
    $$PWD/execerrorprotocol.h \
    $$PWD/datapacket.h \
    $$PWD/abstractprotocol.h
