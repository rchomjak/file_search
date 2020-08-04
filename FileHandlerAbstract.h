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
    std::string start_path;

public:
    FileHandlerAbstract(std::string rootPath) : start_path(rootPath) {};
    ~FileHandlerAbstract() {};


    virtual void file(const fs::directory_entry &file) = 0;
};


#endif //FILE_SEARCH_FILEHANDLERABSTRACT_H
