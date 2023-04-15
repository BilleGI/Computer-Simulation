cmake_minimum_required(VERSION 3.5)

add_executable(computer main.cpp ${MY_INCLUDE_DIR}/cpu.h cpu.cpp ${MY_INCLUDE_DIR}/disc.h disc.cpp
    ${MY_INCLUDE_DIR}/ram.h ram.cpp ${MY_INCLUDE_DIR}/gpu.h gpu.cpp ${MY_INCLUDE_DIR}/kdb.h kdb.cpp)

target_include_directories(computer PUBLIC ${MY_INCLUDE_DIR})

install(TARGETS computer
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
