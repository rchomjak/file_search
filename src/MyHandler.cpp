//
// Created by a on 8/4/20.
//

#include "MyHandler.h"

#include <iostream>


void MyHandler::file(const fs::directory_entry &file) {
    this->file_path_pos.emplace_back(std::pair(this->deep_level, file.path().string()));
}


