cmake_minimum_required(VERSION 3.10.2)

#添加对c++11的支持
set( CMAKE_CXX_FLAGS "-std=c++11" )

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_BINARY_DIR}/bin")

aux_source_directory(${PROJECT_SOURCE_DIR}/src/Test/src test_src)

include_directories("${PROJECT_SOURCE_DIR}/src/lib/include")

link_directories("${PROJECT_BINARY_DIR}/lib")

add_executable(Test ${test_src})

target_link_libraries(Test libfind_pokemon.a)