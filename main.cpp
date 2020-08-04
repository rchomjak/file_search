#include <iostream>

#include "dfs.h"
#include "MyHandler.h"





int main() {
    std::cout << "Hello, World!" << std::endl;

    MyHandler x = MyHandler(".");
    FileHandlerAbstract *handler;
    *handler = static_cast<MyHandler>(x);

    //dfs(handler);

    return 0;
}
