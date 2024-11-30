set(lib_srcs
        basicds.h
        basicds.cpp
)

# Declare the library
add_library(my_libs STATIC
        ${lib_srcs}
)

target_include_directories(my_libs PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)