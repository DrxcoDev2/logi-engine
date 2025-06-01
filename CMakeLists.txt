cmake_minimum_required(VERSION 3.10)
project(Editor3D_OpenGL)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLFW REQUIRED glfw3)
pkg_check_modules(GLEW REQUIRED glew)

include_directories(${GLFW_INCLUDE_DIRS} ${GLEW_INCLUDE_DIRS})
link_directories(${GLFW_LIBRARY_DIRS} ${GLEW_LIBRARY_DIRS})

add_definitions(${GLFW_CFLAGS_OTHER} ${GLEW_CFLAGS_OTHER})

# Usa el main.cpp que est� en src/
add_executable(Editor3D src/main.cpp)

target_link_libraries(Editor3D ${GLFW_LIBRARIES} ${GLEW_LIBRARIES} GL)
