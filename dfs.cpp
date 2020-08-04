//
// Created by a on 8/4/20.
//

#include <filesystem>
#include "dfs.h"

namespace fs=std::filesystem;

void dfs::pre(const fs::directory_entry &file) {}

void dfs::pop(const fs::directory_entry &file) {}

void dfs::explore(const fs::directory_entry &in_file) {

    this->pre(in_file);

    for (auto& file: fs::directorahay_iterator(in_file)) {
        if (file.is_regular_file()) {
            handler
        } else if (file.is_directory()){
            explore(file);
        } else {
            //Not supported file type
            continue;
        }

    }

    this->pop(in_file);

}

void dfs::file_handling(const FileHandlerAbstract &func) {


}