cmake_minimum_required(VERSION 3.20)
project(Minesweeper LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3.0 REQUIRED COMPONENTS Graphics Audio)

add_executable(minesweeper)

target_sources(minesweeper PRIVATE
    src/main.cpp
    src/Game.cpp
    src/Board.cpp
    src/Cell.cpp
    src/AssetManager.cpp
)

target_include_directories(minesweeper PRIVATE include)

# sfml::graphics includes window and system automatically
target_link_libraries(minesweeper PRIVATE
    SFML::Graphics 
    SFML::Audio
)
