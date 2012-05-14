include(model/model.pro)
include(controller/controller.pro)
include(gui/gui.pro)
DEPENDPATH += $$PWD
INCLUDEPATH += $$PWD
SOURCES += main.cpp \
    db/database.cpp
HEADERS += common/singleton.h \
    common/manager.h \
    db/database.h
