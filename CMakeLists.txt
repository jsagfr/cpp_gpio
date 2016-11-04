cmake_minimum_required (VERSION 2.6)
project (gpio)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_compile_options(-Wall)
add_compile_options(-Wextra)
add_executable(gpio ${SOURCES})

set_property(TARGET gpio PROPERTY CXX_STANDARD 11)
set_property(TARGET gpio PROPERTY CXX_STANDARD_REQUIRED ON)
