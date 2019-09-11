cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    enable_testing()

    find_package(Boost REQUIRED COMPONENTS unit_test_framework)

    add_executable(my_library_test
        main.cc

        my_library/my_library_test.cc
    )

    target_link_libraries(my_library_test
        PRIVATE
            my_library::my_library
            Boost::unit_test_framework
    )

    add_test(NAME my_library_test COMMAND my_library_test)
endif()
