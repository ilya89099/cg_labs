SOURCES = main.cpp
isEmpty(QMAKE_CFLAGS_SPLIT_SECTIONS): error("Nope")
isEmpty(QMAKE_CXXFLAGS_SPLIT_SECTIONS): error("Nope")
isEmpty(QMAKE_LFLAGS_GCSECTIONS): error("Nope")
