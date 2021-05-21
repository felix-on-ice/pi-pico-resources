cmake_minimum_required(VERSION 3.20)

# import the SDK
include(pico_sdk_import.cmake)

# set cmake standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# name your project folder
project(task03-serial-input-folder)

# initialize the SDK
pico_sdk_init()

# add your executable files
add_executable(task03-serial-input-folder
            task03-serial-input.c
            )

# import pico_stdlib for your project which pulls in commonly used features
target_link_libraries(task03-serial-input-folder pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(task03-serial-input-folder 1)
pico_enable_stdio_uart(task03-serial-input-folder 0)

# create output files
pico_add_extra_outputs(task03-serial-input-folder)
