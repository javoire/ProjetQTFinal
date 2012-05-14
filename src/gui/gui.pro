DEPENDPATH += $$PWD
HEADERS += film_space/node.h \
    film_space/graphwidget.h \
    film_space/genrenode.h \
    film_space/filmnode.h \
    film_space/manager/filmnodemanager.h \
    filmlistitemwidget.h \
    morefilmsoption.h \
    film_space/help.h
SOURCES += film_space/node.cpp \
    film_space/graphwidget.cpp \
    film_space/genrenode.cpp \
    film_space/filmnode.cpp \
    filmlistitemwidget.cpp \
    morefilmsoption.cpp \
    film_space/help.cpp
FORMS += filmlistitemwidget.ui \
    morefilmsoption.ui

# UI_DIR += ../../resources/gui/
UI_DIR += ./ui_headers/
OTHER_FILES += 
include(form/Form.pro)
