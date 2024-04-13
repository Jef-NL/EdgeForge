# CMake version
cmake_minimum_required(VERSION 3.10)

# Project definition
project(edgeforge VERSION 0.0.1 DESCRIPTION "Edge device IOT Framework")
include(GNUInstallDirs)

# Link source files
set(src_files lib/EdgeForge.cpp)
add_subdirectory(lib/src)
add_library(${PROJECT_NAME} STATIC 
    ${src_files}
)

# Define headers
target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
    PRIVATE
        ${PROJECT_SOURCE_DIR}/lib/include
        ${PROJECT_SOURCE_DIR}/lib/include/structure
)

# Set project properties
set(public_headers include/EdgeForge.h)
set_target_properties(${PROJECT_NAME} PROPERTIES 
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    PUBLIC_HEADER ${public_headers}
)

# If willing to use Variants
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)



#! FOR TESTING
add_executable(main_binary
main.cpp
)
# Just so the main can also use it
target_compile_features(main_binary PRIVATE cxx_std_17)

target_link_libraries(main_binary
    PRIVATE
        ${PROJECT_NAME}
)