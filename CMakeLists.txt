cmake_minimum_required(VERSION 3.16)

project(SortPlot LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find the Qt6 packages
find_package(Qt6 REQUIRED COMPONENTS Charts Widgets Core)

# Add the executable
add_executable(SortPlot main.cpp mergesort.cpp)

# Link the Qt6 libraries
target_link_libraries(SortPlot Qt6::Charts Qt6::Widgets Qt6::Core)
