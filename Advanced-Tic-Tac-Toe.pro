QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mode_selector.cpp \
    pvai.cpp \
    pvp.cpp \
    signup.cpp

HEADERS += \
    mainwindow.h \
    mode_selector.h \
    pvai.h \
    pvp.h \
    signup.h

FORMS += \
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

# Add test sources
SOURCES += tests/test_tic_tac_toe.cpp
