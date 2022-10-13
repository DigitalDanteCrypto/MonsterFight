cmake_minimum_required(VERSION 3.23)
project(MonsterFight)

set(CMAKE_CXX_STANDARD 14)

add_executable(MonsterFight main.cpp Monsters.cpp Monsters.h Fight.cpp Fight.h)
