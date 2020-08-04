#include <iostream>

#include "dfs.h"
#include "MyHandler.h"
#include "FilePrinter.h"


int main(int argc, char **argv) {

    if (argc !=2) {
        return EXIT_FAILURE;
    }

    MyHandler my_handler = MyHandler(std::string(argv[1]));
    dfs my_dfs = dfs(my_handler);
    my_dfs.execute();

    FilePrinter::printTree(my_handler);

    return EXIT_SUCCESS;
}
