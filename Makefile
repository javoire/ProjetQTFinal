#############################################################################
# Makefile for building: bin/film_finder.out.app/Contents/MacOS/film_finder.out
# Generated by qmake (2.01a) (Qt 4.8.0) on: Mon May 14 01:54:38 2012
# Project:  film_finder.pro
# Template: app
# Command: /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/qmake -spec /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ -o Makefile film_finder.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DDATABASE_FILE="\"/Users/jo_da12/Dropbox/Skola/TELECOM/INFSI351/Projet QT/final2/bin/resources/db/film_db.sqlite3\"" -DHELP_FILE="\"/Users/jo_da12/Dropbox/Skola/TELECOM/INFSI351/Projet QT/final2/bin/resources/gui/help.png\"" -DDATABASE_SQLITE -DQT_GUI_LIB -DQT_CORE_LIB
CFLAGS        = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
INCPATH       = -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ -I. -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/lib/QtCore.framework/Versions/4/Headers -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/include/QtCore -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/lib/QtGui.framework/Versions/4/Headers -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/include/QtGui -I/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/include -Isqlite3/include -Ibin/odb/include -Isrc/model -Isrc -I. -Iui_headers -F/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/lib
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = $(SUBLIBS) -F/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/lib -L/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/lib -lodb-1.8 -Lbin/odb/lib/ -lodb-sqlite-1.8 -Wl,-rpath bin/odb/lib/ -framework QtGui -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.4

####### Output directory

OBJECTS_DIR   = obj/

####### Files

SOURCES       = src/model/genre.cpp \
		src/model/film.cpp \
		src/model/mapper_sources/genre-odb.cxx \
		src/model/mapper_sources/film-odb.cxx \
		src/controller/genreinterface.cpp \
		src/controller/filmspaceupdater.cpp \
		src/controller/film_interface.cpp \
		src/controller/filmfilter.cpp \
		src/controller/initializer.cpp \
		src/controller/categoryresult.cpp \
		src/gui/film_space/node.cpp \
		src/gui/film_space/graphwidget.cpp \
		src/gui/film_space/genrenode.cpp \
		src/gui/film_space/filmnode.cpp \
		src/gui/filmlistitemwidget.cpp \
		src/gui/morefilmsoption.cpp \
		src/gui/film_space/help.cpp \
		src/gui/form/sliderhandle.cpp \
		src/gui/form/doublesliderwidget.cpp \
		src/gui/form/filterform.cpp \
		src/gui/form/genrecheckbox.cpp \
		src/gui/form/filmdisplay.cpp \
		src/main.cpp \
		src/db/database.cpp moc_filmspaceupdater.cpp \
		moc_node.cpp \
		moc_graphwidget.cpp \
		moc_filmnode.cpp \
		moc_filmlistitemwidget.cpp \
		moc_morefilmsoption.cpp \
		moc_help.cpp \
		moc_doublesliderwidget.cpp \
		moc_filterform.cpp \
		moc_genrecheckbox.cpp \
		moc_filmdisplay.cpp
OBJECTS       = obj/genre.o \
		obj/film.o \
		obj/genre-odb.o \
		obj/film-odb.o \
		obj/genreinterface.o \
		obj/filmspaceupdater.o \
		obj/film_interface.o \
		obj/filmfilter.o \
		obj/initializer.o \
		obj/categoryresult.o \
		obj/node.o \
		obj/graphwidget.o \
		obj/genrenode.o \
		obj/filmnode.o \
		obj/filmlistitemwidget.o \
		obj/morefilmsoption.o \
		obj/help.o \
		obj/sliderhandle.o \
		obj/doublesliderwidget.o \
		obj/filterform.o \
		obj/genrecheckbox.o \
		obj/filmdisplay.o \
		obj/main.o \
		obj/database.o \
		obj/moc_filmspaceupdater.o \
		obj/moc_node.o \
		obj/moc_graphwidget.o \
		obj/moc_filmnode.o \
		obj/moc_filmlistitemwidget.o \
		obj/moc_morefilmsoption.o \
		obj/moc_help.o \
		obj/moc_doublesliderwidget.o \
		obj/moc_filterform.o \
		obj/moc_genrecheckbox.o \
		obj/moc_filmdisplay.o
DIST          = /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf \
		compile_settings.pri \
		src/model/model.pro \
		src/controller/controller.pro \
		src/gui/form/Form.pro \
		src/gui/gui.pro \
		src/src.pro \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf \
		film_finder.pro
QMAKE_TARGET  = film_finder.out
DESTDIR       = bin/
TARGET        = bin/film_finder.out.app/Contents/MacOS/film_finder.out

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-g \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.5 \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile bin/film_finder.out.app/Contents/PkgInfo bin/film_finder.out.app/Contents/Resources/empty.lproj bin/film_finder.out.app/Contents/Info.plist $(TARGET)

$(TARGET): ui_headers/ui_filmlistitemwidget.h ui_headers/ui_morefilmsoption.h ui_headers/ui_filterform.h ui_headers/ui_filmdisplay.h $(OBJECTS)  
	@$(CHK_DIR_EXISTS) bin/film_finder.out.app/Contents/MacOS/ || $(MKDIR) bin/film_finder.out.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: film_finder.pro  /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++/qmake.conf /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf \
		compile_settings.pri \
		src/model/model.pro \
		src/controller/controller.pro \
		src/gui/form/Form.pro \
		src/gui/gui.pro \
		src/src.pro \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf \
		/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf
	$(QMAKE) -spec /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ -o Makefile film_finder.pro
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/unix.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/mac.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/gcc-base-macx.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-base.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/common/g++-macx.conf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/qconfig.pri:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/modules/qt_webkit_version.pri:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_functions.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt_config.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/exclusive_builds.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_pre.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_pre.prf:
compile_settings.pri:
src/model/model.pro:
src/controller/controller.pro:
src/gui/form/Form.pro:
src/gui/gui.pro:
src/src.pro:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/dwarf2.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/debug.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/default_post.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/default_post.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/x86_64.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/objective_c.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/warn_on.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/qt.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/unix/thread.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/moc.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/rez.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/mac/sdk.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/resources.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/uic.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/yacc.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/lex.prf:
/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/features/include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -spec /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++ -o Makefile film_finder.pro

bin/film_finder.out.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) bin/film_finder.out.app/Contents || $(MKDIR) bin/film_finder.out.app/Contents 
	@$(DEL_FILE) bin/film_finder.out.app/Contents/PkgInfo
	@echo "APPL????" >bin/film_finder.out.app/Contents/PkgInfo
bin/film_finder.out.app/Contents/Resources/empty.lproj: 
	@$(CHK_DIR_EXISTS) bin/film_finder.out.app/Contents/Resources || $(MKDIR) bin/film_finder.out.app/Contents/Resources 
	@touch bin/film_finder.out.app/Contents/Resources/empty.lproj
	
bin/film_finder.out.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) bin/film_finder.out.app/Contents || $(MKDIR) bin/film_finder.out.app/Contents 
	@$(DEL_FILE) bin/film_finder.out.app/Contents/Info.plist
	@sed -e "s,@SHORT_VERSION@,1.0,g" -e "s,@TYPEINFO@,????,g" -e "s,@ICON@,,g" -e "s,@EXECUTABLE@,film_finder.out,g" -e "s,@TYPEINFO@,????,g" /Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/mkspecs/macx-g++/Info.plist.app >bin/film_finder.out.app/Contents/Info.plist
dist: 
	@$(CHK_DIR_EXISTS) obj/film_finder.out1.0.0 || $(MKDIR) obj/film_finder.out1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) obj/film_finder.out1.0.0/ && $(COPY_FILE) --parents src/model/genre.h src/model/film.h src/model/mapper_sources/genre-odb.hxx src/model/mapper_sources/film-odb.hxx src/model/manager/genremanager.h src/model/manager/filmmanager.h src/controller/genreinterfacemanager.h src/controller/genreinterface.h src/controller/filmspaceupdater.h src/controller/filminterfacemanager.h src/controller/film_interface.h src/controller/filmfilter.h src/controller/initializer.h src/controller/categoryresult.h src/gui/film_space/node.h src/gui/film_space/graphwidget.h src/gui/film_space/genrenode.h src/gui/film_space/filmnode.h src/gui/film_space/manager/filmnodemanager.h src/gui/filmlistitemwidget.h src/gui/morefilmsoption.h src/gui/film_space/help.h src/gui/form/sliderhandle.h src/gui/form/doublesliderwidget.h src/gui/form/filterform.h src/gui/form/genrecheckbox.h src/gui/form/filmdisplay.h src/common/singleton.h src/common/manager.h src/db/database.h obj/film_finder.out1.0.0/ && $(COPY_FILE) --parents src/model/genre.cpp src/model/film.cpp src/model/mapper_sources/genre-odb.cxx src/model/mapper_sources/film-odb.cxx src/controller/genreinterface.cpp src/controller/filmspaceupdater.cpp src/controller/film_interface.cpp src/controller/filmfilter.cpp src/controller/initializer.cpp src/controller/categoryresult.cpp src/gui/film_space/node.cpp src/gui/film_space/graphwidget.cpp src/gui/film_space/genrenode.cpp src/gui/film_space/filmnode.cpp src/gui/filmlistitemwidget.cpp src/gui/morefilmsoption.cpp src/gui/film_space/help.cpp src/gui/form/sliderhandle.cpp src/gui/form/doublesliderwidget.cpp src/gui/form/filterform.cpp src/gui/form/genrecheckbox.cpp src/gui/form/filmdisplay.cpp src/main.cpp src/db/database.cpp obj/film_finder.out1.0.0/ && $(COPY_FILE) --parents src/gui/filmlistitemwidget.ui src/gui/morefilmsoption.ui src/gui/form/filterform.ui src/gui/form/filmdisplay.ui obj/film_finder.out1.0.0/ && (cd `dirname obj/film_finder.out1.0.0` && $(TAR) film_finder.out1.0.0.tar film_finder.out1.0.0 && $(COMPRESS) film_finder.out1.0.0.tar) && $(MOVE) `dirname obj/film_finder.out1.0.0`/film_finder.out1.0.0.tar.gz . && $(DEL_FILE) -r obj/film_finder.out1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r bin/film_finder.out.app
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_filmspaceupdater.cpp moc_node.cpp moc_graphwidget.cpp moc_filmnode.cpp moc_filmlistitemwidget.cpp moc_morefilmsoption.cpp moc_help.cpp moc_doublesliderwidget.cpp moc_filterform.cpp moc_genrecheckbox.cpp moc_filmdisplay.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_filmspaceupdater.cpp moc_node.cpp moc_graphwidget.cpp moc_filmnode.cpp moc_filmlistitemwidget.cpp moc_morefilmsoption.cpp moc_help.cpp moc_doublesliderwidget.cpp moc_filterform.cpp moc_genrecheckbox.cpp moc_filmdisplay.cpp
moc_filmspaceupdater.cpp: src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/filmfilter.h \
		src/common/singleton.h \
		src/controller/filminterfacemanager.h \
		src/common/manager.h \
		src/controller/genreinterfacemanager.h \
		src/controller/filmspaceupdater.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/controller/filmspaceupdater.h -o moc_filmspaceupdater.cpp

moc_node.cpp: src/gui/film_space/node.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/film_space/node.h -o moc_node.cpp

moc_graphwidget.cpp: src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/graphwidget.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/film_space/graphwidget.h -o moc_graphwidget.cpp

moc_filmnode.cpp: src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/filmnode.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/film_space/filmnode.h -o moc_filmnode.cpp

moc_filmlistitemwidget.cpp: src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/gui/filmlistitemwidget.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/filmlistitemwidget.h -o moc_filmlistitemwidget.cpp

moc_morefilmsoption.cpp: src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h \
		src/gui/morefilmsoption.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/morefilmsoption.h -o moc_morefilmsoption.cpp

moc_help.cpp: src/gui/film_space/help.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/film_space/help.h -o moc_help.cpp

moc_doublesliderwidget.cpp: src/gui/form/sliderhandle.h \
		src/gui/form/doublesliderwidget.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/form/doublesliderwidget.h -o moc_doublesliderwidget.cpp

moc_filterform.cpp: src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h \
		src/gui/form/filterform.h \
		src/gui/form/filterform.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/form/filterform.h -o moc_filterform.cpp

moc_genrecheckbox.cpp: src/gui/form/genrecheckbox.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/form/genrecheckbox.h -o moc_genrecheckbox.cpp

moc_filmdisplay.cpp: src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/gui/form/filmdisplay.h
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ src/gui/form/filmdisplay.h -o moc_filmdisplay.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: ui_headers/qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) ui_headers/qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all: ui_headers/ui_filmlistitemwidget.h ui_headers/ui_morefilmsoption.h ui_headers/ui_filterform.h ui_headers/ui_filmdisplay.h
compiler_uic_clean:
	-$(DEL_FILE) ui_headers/ui_filmlistitemwidget.h ui_headers/ui_morefilmsoption.h ui_headers/ui_filterform.h ui_headers/ui_filmdisplay.h
ui_headers/ui_filmlistitemwidget.h: src/gui/filmlistitemwidget.ui
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/uic src/gui/filmlistitemwidget.ui -o ui_headers/ui_filmlistitemwidget.h

ui_headers/ui_morefilmsoption.h: src/gui/morefilmsoption.ui
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/uic src/gui/morefilmsoption.ui -o ui_headers/ui_morefilmsoption.h

ui_headers/ui_filterform.h: src/gui/form/filterform.ui
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/uic src/gui/form/filterform.ui -o ui_headers/ui_filterform.h

ui_headers/ui_filmdisplay.h: src/gui/form/filmdisplay.ui
	/Users/jo_da12/Bin/QtSDK/Desktop/Qt/4.8.0/gcc/bin/uic src/gui/form/filmdisplay.ui -o ui_headers/ui_filmdisplay.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

obj/genre.o: src/model/genre.cpp src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/genre.o src/model/genre.cpp

obj/film.o: src/model/film.cpp src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/film.o src/model/film.cpp

obj/genre-odb.o: src/model/mapper_sources/genre-odb.cxx src/model/mapper_sources/genre-odb.hxx \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/model/mapper_sources/film-odb.hxx \
		src/model/mapper_sources/film-odb.ixx \
		src/model/mapper_sources/genre-odb.ixx
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/genre-odb.o src/model/mapper_sources/genre-odb.cxx

obj/film-odb.o: src/model/mapper_sources/film-odb.cxx src/model/mapper_sources/film-odb.hxx \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/model/mapper_sources/genre-odb.hxx \
		src/model/mapper_sources/genre-odb.ixx \
		src/model/mapper_sources/film-odb.ixx
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/film-odb.o src/model/mapper_sources/film-odb.cxx

obj/genreinterface.o: src/controller/genreinterface.cpp src/controller/genreinterface.h \
		src/model/genre.h \
		src/model/film.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/genreinterface.o src/controller/genreinterface.cpp

obj/filmspaceupdater.o: src/controller/filmspaceupdater.cpp src/controller/filmspaceupdater.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/filmfilter.h \
		src/common/singleton.h \
		src/controller/filminterfacemanager.h \
		src/common/manager.h \
		src/controller/genreinterfacemanager.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filmspaceupdater.o src/controller/filmspaceupdater.cpp

obj/film_interface.o: src/controller/film_interface.cpp src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/controller/categoryresult.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/film_interface.o src/controller/film_interface.cpp

obj/filmfilter.o: src/controller/filmfilter.cpp src/controller/filmfilter.h \
		src/common/singleton.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filmfilter.o src/controller/filmfilter.cpp

obj/initializer.o: src/controller/initializer.cpp src/controller/initializer.h \
		src/common/singleton.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h \
		src/model/manager/filmmanager.h \
		src/common/manager.h \
		src/controller/filminterfacemanager.h \
		src/model/manager/genremanager.h \
		src/controller/genreinterfacemanager.h \
		src/controller/filmspaceupdater.h \
		src/controller/filmfilter.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/initializer.o src/controller/initializer.cpp

obj/categoryresult.o: src/controller/categoryresult.cpp src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/categoryresult.o src/controller/categoryresult.cpp

obj/node.o: src/gui/film_space/node.cpp src/gui/film_space/node.h \
		src/gui/film_space/help.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/node.o src/gui/film_space/node.cpp

obj/graphwidget.o: src/gui/film_space/graphwidget.cpp src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/filminterfacemanager.h \
		src/common/manager.h \
		src/common/singleton.h \
		src/controller/genreinterfacemanager.h \
		src/model/manager/filmmanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/graphwidget.o src/gui/film_space/graphwidget.cpp

obj/genrenode.o: src/gui/film_space/genrenode.cpp src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/genrenode.o src/gui/film_space/genrenode.cpp

obj/filmnode.o: src/gui/film_space/filmnode.cpp src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filmnode.o src/gui/film_space/filmnode.cpp

obj/filmlistitemwidget.o: src/gui/filmlistitemwidget.cpp src/gui/filmlistitemwidget.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		ui_headers/ui_filmlistitemwidget.h \
		src/gui/form/filmdisplay.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/morefilmsoption.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filmlistitemwidget.o src/gui/filmlistitemwidget.cpp

obj/morefilmsoption.o: src/gui/morefilmsoption.cpp src/gui/morefilmsoption.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/filmlistitemwidget.h \
		ui_headers/ui_morefilmsoption.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/morefilmsoption.o src/gui/morefilmsoption.cpp

obj/help.o: src/gui/film_space/help.cpp src/gui/film_space/help.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/help.o src/gui/film_space/help.cpp

obj/sliderhandle.o: src/gui/form/sliderhandle.cpp src/gui/form/sliderhandle.h \
		src/gui/form/doublesliderwidget.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/sliderhandle.o src/gui/form/sliderhandle.cpp

obj/doublesliderwidget.o: src/gui/form/doublesliderwidget.cpp src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/doublesliderwidget.o src/gui/form/doublesliderwidget.cpp

obj/filterform.o: src/gui/form/filterform.cpp src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h \
		ui_headers/ui_filterform.h \
		src/controller/filmspaceupdater.h \
		src/controller/filmfilter.h \
		src/common/singleton.h \
		src/controller/filminterfacemanager.h \
		src/common/manager.h \
		src/controller/genreinterfacemanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filterform.o src/gui/form/filterform.cpp

obj/genrecheckbox.o: src/gui/form/genrecheckbox.cpp src/gui/form/genrecheckbox.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/genrecheckbox.o src/gui/form/genrecheckbox.cpp

obj/filmdisplay.o: src/gui/form/filmdisplay.cpp src/gui/form/filmdisplay.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		ui_headers/ui_filmdisplay.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/filmdisplay.o src/gui/form/filmdisplay.cpp

obj/main.o: src/main.cpp src/db/database.h \
		src/controller/initializer.h \
		src/common/singleton.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/gui/film_space/filmnode.h \
		src/controller/categoryresult.h \
		src/controller/film_interface.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/gui/form/filterform.h \
		src/gui/form/doublesliderwidget.h \
		src/gui/form/sliderhandle.h \
		src/gui/form/genrecheckbox.h \
		src/gui/filmlistitemwidget.h \
		src/gui/morefilmsoption.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/main.o src/main.cpp

obj/database.o: src/db/database.cpp src/db/database.h \
		src/model/film.h \
		src/model/genre.h \
		src/controller/genreinterface.h \
		src/controller/film_interface.h \
		src/gui/film_space/filmnode.h \
		src/gui/film_space/graphwidget.h \
		src/gui/film_space/genrenode.h \
		src/gui/film_space/node.h \
		src/controller/categoryresult.h \
		src/model/mapper_sources/film-odb.hxx \
		src/model/mapper_sources/genre-odb.hxx \
		src/model/mapper_sources/genre-odb.ixx \
		src/model/mapper_sources/film-odb.ixx \
		src/model/manager/filmmanager.h \
		src/common/manager.h \
		src/common/singleton.h \
		src/model/manager/genremanager.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/database.o src/db/database.cpp

obj/moc_filmspaceupdater.o: moc_filmspaceupdater.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_filmspaceupdater.o moc_filmspaceupdater.cpp

obj/moc_node.o: moc_node.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_node.o moc_node.cpp

obj/moc_graphwidget.o: moc_graphwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_graphwidget.o moc_graphwidget.cpp

obj/moc_filmnode.o: moc_filmnode.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_filmnode.o moc_filmnode.cpp

obj/moc_filmlistitemwidget.o: moc_filmlistitemwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_filmlistitemwidget.o moc_filmlistitemwidget.cpp

obj/moc_morefilmsoption.o: moc_morefilmsoption.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_morefilmsoption.o moc_morefilmsoption.cpp

obj/moc_help.o: moc_help.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_help.o moc_help.cpp

obj/moc_doublesliderwidget.o: moc_doublesliderwidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_doublesliderwidget.o moc_doublesliderwidget.cpp

obj/moc_filterform.o: moc_filterform.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_filterform.o moc_filterform.cpp

obj/moc_genrecheckbox.o: moc_genrecheckbox.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_genrecheckbox.o moc_genrecheckbox.cpp

obj/moc_filmdisplay.o: moc_filmdisplay.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obj/moc_filmdisplay.o moc_filmdisplay.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

