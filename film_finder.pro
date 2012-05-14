TARGET = bin/film_finder.out
OBJECTS_DIR = obj/
DEFINES += "DATABASE_FILE=\"\\\""$$PWD"/bin/resources/db/film_db.sqlite3\\\"\""
DEFINES += "HELP_FILE=\"\\\""$$PWD"/bin/resources/gui/help.png\\\"\""
include(compile_settings.pri)
include(src/src.pro)
