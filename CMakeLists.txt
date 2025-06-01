cmake_minimum_required(VERSION 3.10)
project(Editor3D)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(imgui)

find_package(OpenGL REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(GLFW REQUIRED glfw3)

include_directories(
    ${GLFW_INCLUDE_DIRS}
    ${OPENGL_INCLUDE_DIR}
    imgui
    imgui/backends
    src
)

add_executable(Editor3D
    src/main.cpp
)

target_link_libraries(Editor3D
    ${GLFW_LIBRARIES}
    OpenGL::GL
    imgui
    glfw
    dl
)
