//
// Created by a on 8/4/20.
//

#include <filesystem>
#include <iostream>
#include "TopoSort.h"

namespace fs = std::filesystem;

void TopoSort::pre() {
    my_file_handler->deep_level += 1;
}

void TopoSort::post() {
    my_file_handler->deep_level -= 1;
}


void TopoSort::explore(const fs::directory_entry &in_file) {

    this->pre();

    for (auto &file: fs::directory_iterator(in_file)) {

        if (file.is_directory()) {
            explore(file);
        }
        my_file_handler->file(static_cast<const fs::directory_entry>(file));
    }

    this->post();

}

void TopoSort::execute() {
    try {
        this->explore((fs::directory_entry(this->my_file_handler->start_path)));
    } catch (fs::filesystem_error &error) {
        ;
    }

}
