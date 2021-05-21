cmake_minimum_required(VERSION 3.20)

# import the SDK
include(pico_sdk_import.cmake)

# set cmake standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# name your project folder
project(task01-blinky-folder)

# initialize the SDK
pico_sdk_init()

# add your executable files
add_executable(task01-blinky-folder
        task01-blinky.c
        )

# import pico_stdlib for your project which pulls in commonly used features
target_link_libraries(task01-blinky-folder pico_stdlib)

# create map/bin/hex file etc
pico_add_extra_outputs(task01-blinky-folder)
