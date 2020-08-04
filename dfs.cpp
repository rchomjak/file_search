//
// Created by a on 8/4/20.
//

#include <filesystem>
#include <iostream>
#include "dfs.h"

namespace fs = std::filesystem;

void dfs::pre(const fs::directory_entry &file) {
    my_file_handler.deep_level += 1;
}

void dfs::pop(const fs::directory_entry &file) {
    my_file_handler.deep_level -= 1;
}


void dfs::explore(const fs::directory_entry &in_file) {

    this->pre(in_file);

    for (auto &file: fs::directory_iterator(in_file)) {

        if (file.is_directory()) {
            explore(file);
        }
        my_file_handler.file(static_cast<const fs::directory_entry>(file));
    }

    this->pop(in_file);

}

void dfs::file_handling(const FileHandlerAbstract &func) {


}