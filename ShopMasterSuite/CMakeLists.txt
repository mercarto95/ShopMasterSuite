cmake_minimum_required(VERSION 3.20)
project(ShopMasterSuite)

set(CMAKE_CXX_STANDARD 14)

file(GLOB_RECURSE HEADER_FILES ${PROJECT_SOURCE_DIR}/Include/*.h)
file(GLOB_RECURSE SOURCE_FILES ${PROJECT_SOURCE_DIR}/Source/*.cpp)

add_executable(ShopMasterSuite ${HEADER_FILES} ${SOURCE_FILES})