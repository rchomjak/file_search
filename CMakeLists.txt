cmake_minimum_required(VERSION 3.17)
project(file_search)

set(CMAKE_CXX_STANDARD 20)
link_libraries(stdc++fs)
add_executable(file_search main.cpp FileHandlerAbstract.h TopoSort.cpp TopoSort.h MyHandler.cpp MyHandler.h FilePrinter.cpp FilePrinter.h DFSInterface.h)