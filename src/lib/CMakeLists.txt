cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_CXX_FLAGS "-std=c++11")

set(LIBRARY_OUTPUT_PATH "${PROJECT_BINARY_DIR}/lib")

aux_source_directory(${PROJECT_SOURCE_DIR}/src/lib/src Findlib_src)

include_directories("${PROJECT_SOURCE_DIR}/src/lib/include")

add_library(find_pokemon SHARED ${Findlib_src})

add_library(find_pokemon_static STATIC ${Findlib_src})

set_target_properties(find_pokemon_static PROPERTIES OUTPUT_NAME "find_pokemon")