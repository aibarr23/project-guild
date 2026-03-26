cmake_minimum_required(VERSION 3.8.2)

project(linux_blinky)

message(STATUS "Current working directory: ${CMAKE_CURRENT_SOURCE_DIR}/../tivaware")
set(TIVAWARE_PATH "/mnt/c/Users/aibar/Downloads/REPOSITORY/project-guild/Embedded-Systems/Training-Camp/using_tivac/tivaware")

# if(DEFINED ENV{HOME})
#     message(STATUS "HOME environment variable is set to: $ENV{HOME}")
# else()
#     message(FATAL_ERROR "HOME environment variable is not set.")
# endif()

#Toolchain file
include(tm4c123g.cmake)

#Tivaware files
include_directories(${TIVAWARE_PATH})
message(STATUS "TIVAWARE_PATH is set to: ${TIVAWARE_PATH}")
#Source files
file(GLOB SOURCES "src/*.c")
add_executable(${CMAKE_PROJECT_NAME}.axf ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME}.axf 
    ${TIVAWARE_PATH}/usblib/gcc/libusb.a

    ${TIVAWARE_PATH}/driverlib/gcc/libdriver.a
)
