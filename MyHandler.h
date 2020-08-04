//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_MYHANDLER_H
#define FILE_SEARCH_MYHANDLER_H

#include "FileHandlerAbstract.h"

#include <filesystem>
#include <map>

namespace fs = std::filesystem;


class MyHandler: public FileHandlerAbstract {

public:
    std::map<std::int32_t , std::string> file_path_pos;
    std::int64_t deep_level = 0;

public:
    MyHandler(const std::string rootPath) : FileHandlerAbstract(rootPath) {};
    ~MyHandler();

public:
    void directory(fs::directory_entry &file) override;
    void regular_file(fs::directory_entry &file) override;


};


#endif //FILE_SEARCH_MYHANDLER_H
