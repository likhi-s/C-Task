cmake_minimum_required(VERSION 3.16)

project(Task LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Task main.cpp
    ac.h ac.cpp
    switch.h switch.cpp
    wire.h wire.cpp)

include(GNUInstallDirs)
install(TARGETS Task
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
