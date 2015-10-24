cmake_minimum_required(VERSION 2.8)
project(GenomeSampler)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

SET(CMAKE_CXX_FLAGS "-std=c++0x")

include_directories(include)

add_executable(sampler main.cxx src/Genome.cxx src/Human.cxx src/HumanGenome.cxx)