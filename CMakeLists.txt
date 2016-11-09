cmake_minimum_required (VERSION 2.6)
project (gpioc++)

add_library(gpioc++ src/Gpio.cpp)

add_compile_options(-Wall)
add_compile_options(-Wextra)
set_property(TARGET gpioc++ PROPERTY CXX_STANDARD 11)
set_property(TARGET gpioc++ PROPERTY CXX_STANDARD_REQUIRED ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)

target_include_directories(gpioc++ PUBLIC include)

install(TARGETS gpioc++ DESTINATION lib)
install(FILES include/Gpio.h DESTINATION include/gpioc++)
