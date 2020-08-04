//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_DFS_H
#define FILE_SEARCH_DFS_H


#include "FileHandlerAbstract.h"

class dfs {

public:
    dfs(FileHandlerAbstract &in_handler):handler(in_handler){};

private:
    void pop(const fs::directory_entry &file);
    void pre(const fs::directory_entry &file);
    void explore(const fs::directory_entry &file);
    void file_handling(const FileHandlerAbstract &func);

    const FileHandlerAbstract &handler;
};


#endif //FILE_SEARCH_DFS_H
