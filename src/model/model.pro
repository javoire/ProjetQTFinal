
DEPENDPATH += $$PWD
HEADERS += genre.h \
    film.h \
    mapper_sources/genre-odb.hxx \
    mapper_sources/film-odb.hxx \
    manager/genremanager.h \
    manager/filmmanager.h
SOURCES += genre.cpp \
    film.cpp \
    mapper_sources/genre-odb.cxx \
    mapper_sources/film-odb.cxx
OTHER_FILES += mapper_sources/genre-odb.ixx \
    mapper_sources/film-odb.ixx
INCLUDEPATH += $$PWD
