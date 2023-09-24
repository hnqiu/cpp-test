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

foreach(SRC_ITEM ${SRC_LIST})
    get_filename_component(SRC_FILE ${SRC_ITEM} NAME)
    string(REPLACE ".cpp" "" EXE_NAME ${SRC_FILE})
    add_executable(${EXE_NAME} ${SRC_FILE})
    target_link_libraries(${EXE_NAME} Threads::Threads)
endforeach(SRC_ITEM ${SRC_LIST})
