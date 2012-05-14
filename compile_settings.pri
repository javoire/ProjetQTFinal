# ## SQLITE3 ###
INCLUDEPATH += sqlite3/include/

# ## ODB LIBRARIES ###
INCLUDEPATH += bin/odb/include/
LIBS += -lodb-1.8 \
    -Lbin/odb/lib/
LIBS += -lodb-sqlite-1.8 \
    -Lbin/odb/lib/
LIBS += -Wl,-rpath \
    bin/odb/lib/

# DATABASE
DEFINES += DATABASE_SQLITE
HEADERS += 
SOURCES += 
