QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    display.cpp \
    history.cpp \
    main.cpp \
    messageBox.cpp \
    performance.cpp \
    mainwindow.cpp \
    mode_selector.cpp \
    pvai.cpp \
    pvp.cpp \
    signup.cpp \
    #tests/test_tic_tac_toe.cpp

HEADERS += \
    display.h \
    history.h \
    messageBox.h \
    performance.h \
    mainwindow.h \
    mode_selector.h \
    pvai.h \
    pvp.h \
    signup.h \
    #tests/test_tic_tac_toe.h

FORMS += \
    display.ui \
    history.ui \
    mainwindow.ui \
    mode_selector.ui \
    pvai.ui \
    pvp.ui \
    signup.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Add Google Test include directory
#INCLUDEPATH += $$PWD/googletest/googletest/include

# Add Google Test library directory
#LIBS += -L$$PWD/googletest/build/lib -lgtest -lgtest_main

RESOURCES += \
    Resources.qrc

RC_ICONS = tic-tac-tactics.ico
