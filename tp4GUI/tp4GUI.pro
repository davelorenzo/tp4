TEMPLATE = app
TARGET = tp4GUI
QT += core \
    gui
HEADERS += ajouterjoueurdialog.h \
    tp4gui.h
SOURCES += ajouterjoueurdialog.cpp \
    main.cpp \
    tp4gui.cpp
FORMS += ajouterjoueurdialog.ui \
    tp4gui.ui
RESOURCES += 
LIBS += "../tp4Lib/Debug/libtp4Lib.a"
INCLUDEPATH += "../tp4Lib/."
