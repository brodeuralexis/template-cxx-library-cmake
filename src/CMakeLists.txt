cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

add_library(my_library
    my_library/my_library.hh my_library/my_library.cc
)

add_library(my_library::my_library ALIAS my_library)

target_compile_features(my_library
    PUBLIC
        cxx_std_17
)

target_include_directories(my_library
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
