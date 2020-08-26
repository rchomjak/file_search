#include <iostream>

#include "TopoSort.h"
#include "MyHandler.h"
#include "FilePrinter.h"


int main(int argc, char **argv) {

    if (argc !=2) {
        return EXIT_FAILURE;
    }

    std::shared_ptr my_handler = std::make_shared<MyHandler>(std::string(argv[1]));

    std::unique_ptr my_dfs = std::make_unique<TopoSort>(my_handler);
    my_dfs->execute();

    FilePrinter::printTree(my_handler);

    return EXIT_SUCCESS;
}
