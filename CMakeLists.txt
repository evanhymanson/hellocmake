cmake_minimum_required(VERSION 3.26)

project(hellocmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(mathlib)
add_subdirectory(stringlib)
add_subdirectory(geomlib)

# create executable
add_executable(app main.cpp)

# link libraries to executable
target_link_libraries(app mathlib stringlib geomlib)

# enable testing
enable_testing()
add_subdirectory(tests)