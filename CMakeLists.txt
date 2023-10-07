cmake_minimum_required(VERSION 2.8)
project(cppTest)

find_package(Boost REQUIRED COMPONENTS)
find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB SRC_LIST
    *.cpp
)
# exclude test_thread.cpp
# list(FILTER SRC_LIST EXCLUDE REGEX ".*thread.*cpp")

foreach(SRC_ITEM ${SRC_LIST})
    get_filename_component(SRC_FILE ${SRC_ITEM} NAME)
    string(REPLACE ".cpp" "" EXE_NAME ${SRC_FILE})
    add_executable(${EXE_NAME} ${SRC_FILE})

    set(cppTest_LIBRARIES "")
    if(EXE_NAME MATCHES ".*thread.*")
        # link to Threads only when name matches pattern
        set(cppTest_LIBRARIES Threads::Threads)
    endif()
    target_link_libraries(${EXE_NAME} ${cppTest_LIBRARIES})
endforeach(SRC_ITEM ${SRC_LIST})
