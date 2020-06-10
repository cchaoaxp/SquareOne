QT += widgets gui


TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/../../guiLib \
               $$PWD/../../build-guiLib-Desktop_Qt_5_14_1_MinGW_64_bit-Debug

DEPENDPATH += $${INCLUDEPATH}

SOURCES += \
    SetTimeOfDayController.cpp

HEADERS += \
    SetTimeOfDayController.h

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../../build-guiLib-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/ -lguiLib

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../build-guiLib-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/guiLib.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../build-guiLib-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libguiLib.a

