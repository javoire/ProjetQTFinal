#!/bin/bash

odb -d sqlite --generate-query --generate-schema --output-dir mapper_sources *.h -I /usr/include/qt4/ -I /usr/include/qt4/QtCore/ -D ODB_COMPILATION

#odb -d sqlite --generate-query --profile qt --profile boost --generate-schema *.h *.cpp -I /usr/include/qt4/

