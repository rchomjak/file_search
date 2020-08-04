//
// Created by a on 8/4/20.
//

#include "MyHandler.h"

#include <iostream>


void MyHandler::directory(fs::directory_entry &file) {
    std::cout<< "Directory" << file.path().string() << std::endl;
}

void MyHandler::regular_file(fs::directory_entry &file) {
    std::cout<< "File" << file.path().string() << std::endl;
}
