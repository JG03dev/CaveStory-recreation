cmake_minimum_required(VERSION 3.25)
project(CaveStory-recreation)

set(CMAKE_CXX_STANDARD 17)

add_executable(CaveStory-recreation src/main.cpp include/game.h src/game.cpp)

# Link SDL2 library
target_link_libraries(CaveStory-recreation SDL2)