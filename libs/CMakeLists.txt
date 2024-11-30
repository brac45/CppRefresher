add_library(mylibs
        STATIC
        basicds.h
        basicds.cpp
)

target_include_directories(mylibs
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}
)