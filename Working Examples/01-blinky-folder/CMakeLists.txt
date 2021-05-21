cmake_minimum_required(VERSION 3.20)

# import the SDK
include(pico_sdk_import.cmake)

# set cmake standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# name your project folder
project(01-blinky-folder)

# initialize the SDK
pico_sdk_init()

# add your executable files
add_executable(01-blinky-folder
        blinky.c
        )

# import pico_stdlib for your project which pulls in commonly used features
target_link_libraries(01-blinky-folder pico_stdlib)

# create output files
pico_add_extra_outputs(01-blinky-folder)
