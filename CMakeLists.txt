
cmake_minimum_required(VERSION 3.14)

project(QuadraticSolver LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
    src/main.cpp
)
