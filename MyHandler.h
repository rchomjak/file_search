//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_MYHANDLER_H
#define FILE_SEARCH_MYHANDLER_H

#include "FileHandlerAbstract.h"

#include <filesystem>
#include <map>
#include <utility>

namespace fs = std::filesystem;


class MyHandler : public FileHandlerAbstract {

public:
    explicit MyHandler(std::string rootPath) : FileHandlerAbstract(rootPath) {};

    virtual ~MyHandler() = default;

    std::int64_t deep_level = 0;
    std::vector<std::pair<std::int32_t, std::string>> file_path_pos;

public:
    virtual void file(const fs::directory_entry &file) override;


};


#endif //FILE_SEARCH_MYHANDLER_H
