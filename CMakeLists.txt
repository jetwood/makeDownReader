cmake_minimum_required(VERSION 3.10.2)
project(makeDownReader)

INCLUDE_DIRECTORIES(inc)

AUX_SOURCE_DIRECTORY(src DIR_SRCS)

SET(CMAKE_C_STANDARD 99)
SET(SRC ${DIR_SRCS} inc/markDown.h src/main.c src/markDown.c)
LINK_DIRECTORIES(lib)
add_executable(${PROJECT_NAME} ${SRC})