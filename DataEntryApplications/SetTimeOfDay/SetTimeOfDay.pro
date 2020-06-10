QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

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

INCLUDEPATH += $$PWD/../../lib/guiLib \
               $$PWD/../../lib/appControllers/SetTimeOfDayController

DEPENDPATH += $${INCLUDEPATH}

SOURCES += \
    main.cpp

HEADERS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

unix:!macx: LIBS += -L$$PWD/../../lib/appControllers/build-SetTimeOfDayController-Desktop-Debug/ -lSetTimeOfDayController

INCLUDEPATH += $$PWD/../../lib/appControllers/build-SetTimeOfDayController-Desktop-Debug
DEPENDPATH += $$PWD/../../lib/appControllers/build-SetTimeOfDayController-Desktop-Debug

unix:!macx: PRE_TARGETDEPS += $$PWD/../../lib/appControllers/build-SetTimeOfDayController-Desktop-Debug/libSetTimeOfDayController.a

unix:!macx: LIBS += -L$$PWD/../../lib/build-guiLib-Desktop-Debug/ -lguiLib

INCLUDEPATH += $$PWD/../../lib/build-guiLib-Desktop-Debug
DEPENDPATH += $$PWD/../../lib/build-guiLib-Desktop-Debug

unix:!macx: PRE_TARGETDEPS += $$PWD/../../lib/build-guiLib-Desktop-Debug/libguiLib.a
