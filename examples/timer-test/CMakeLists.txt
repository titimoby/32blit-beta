cmake_minimum_required(VERSION 3.9)
project (timer-test)
include (../../32blit.cmake)
blit_executable (timer-test timer-test.cpp)
blit_metadata (timer-test metadata.yml)