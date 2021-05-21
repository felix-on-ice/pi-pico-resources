cmake_minimum_required(VERSION 3.20)

# import the SDK
include(pico_sdk_import.cmake)

# set cmake standards
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# name your project folder
project(02-helloworld-extension)

# initialize the SDK
pico_sdk_init()

# add your executable files
add_executable(02-helloworld-extension
            helloworldext.c
            )

# import pico_stdlib for your project which pulls in commonly used features
target_link_libraries(02-helloworld-extension pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(02-helloworld-extension 1)
pico_enable_stdio_uart(02-helloworld-extension 0)

# create output files
pico_add_extra_outputs(02-helloworld-extension)
