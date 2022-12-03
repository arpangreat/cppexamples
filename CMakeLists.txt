set(files fmtExs)
cmake_minimum_required(VERSION 3.24)


foreach(file ${files})
    message("Filename: ${file}")
endforeach()

project(CppExs)

find_package(fmt)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
foreach(file ${files})
    add_executable(printer ${file}/printer.cpp)
    target_link_libraries(printer fmt::fmt)
endforeach()
