//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_FILEHANDLERABSTRACT_H
#define FILE_SEARCH_FILEHANDLERABSTRACT_H

#include <filesystem>
#include <utility>

namespace fs = std::filesystem;

class FileHandlerAbstract {

public:

    FileHandlerAbstract(std::string root_path): start_path(std::move(root_path)){};
    std::string start_path;

    virtual void directory(fs::directory_entry &file) = 0;
    virtual void regular_file(fs::directory_entry &file) = 0;
};



#endif //FILE_SEARCH_FILEHANDLERABSTRACT_H
