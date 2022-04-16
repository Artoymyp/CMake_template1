cmake_minimum_required(VERSION 3.2)
project(config_creation_lib C CXX)

set(SOURCE_FILES
    config_creation.h
    config_creation.cpp
)

add_library(config_creation_lib SHARED STATIC ${SOURCE_FILES})

target_include_directories(config_creation_lib PUBLIC ../externals)
target_include_directories(config_creation_lib PUBLIC ${PROJECT_SOURCE_DIR})
