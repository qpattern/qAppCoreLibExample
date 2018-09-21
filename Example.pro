QT += qml quick

CONFIG += c++11

VER_MAJ = 0
VER_MIN = 0
VER_PAT = 1

INCLUDEPATH += \
    src

HEADERS += \
    src/control/ApplicationManager.hpp \
    src/control/PeopleManager.hpp \
    src/model/PeopleModel.hpp \
    src/model/Person.hpp

SOURCES += \
    src/control/ApplicationManager.cpp \
    src/control/PeopleManager.cpp \
    src/main.cpp \
    src/model/PeopleModel.cpp \
    src/model/Person.cpp

RESOURCES += \
    qml/qml.qrc

include($$PWD/qAppCoreLib/qAppCoreLib.pri)
