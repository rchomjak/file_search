
set(BINARY ${CMAKE_PROJECT_NAME})

link_libraries(stdc++fs)

#add_executable(file_search main.cpp FileHandlerAbstract.h TopoSort.cpp TopoSort.h MyHandler.cpp MyHandler.h FilePrinter.cpp FilePrinter.h DFSInterface.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})


add_library(${BINARY}_lib STATIC ${SOURCES})