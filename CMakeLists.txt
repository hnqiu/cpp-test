cmake_minimum_required(VERSION 2.8)

project(cppTest)

find_package(Boost REQUIRED COMPONENTS)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


file(GLOB SRC_LIST
    *.cpp 
)
add_executable(cpptest ${SRC_LIST})
target_link_libraries(cpptest ${Boost_LIBRARIES})
