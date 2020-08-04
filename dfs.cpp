//
// Created by a on 8/4/20.
//

#include <filesystem>
#include <iostream>
#include "dfs.h"

namespace fs=std::filesystem;

void dfs::pre(const fs::directory_entry &file) {}

void dfs::pop(const fs::directory_entry &file) {}

void dfs::explore(const fs::directory_entry &in_file) {

    this->pre(in_file);
    std::cout<< in_file <<std::endl;
    for (auto& file: fs::directory_iterator(in_file)) {
        if (file.is_regular_file()) {
            std::cout<< file_handler.start_path<<std::endl;
        } else if (file.is_directory()){
            std::cout<< file_handler.start_path<<std::endl;
            //explore(file);
        } else {
            //Not supported file type
            continue;
        }

    }

    this->pop(in_file);

}

void dfs::file_handling(const FileHandlerAbstract &func) {


}