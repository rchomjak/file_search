//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_DFS_H
#define FILE_SEARCH_DFS_H

#include "FileHandlerAbstract.h"
#include "MyHandler.h"

class dfs {

public:

    void execute();

    explicit dfs(FileHandlerAbstract &in_handler) : my_file_handler(dynamic_cast<MyHandler &>(in_handler)) {

    };

    ~dfs() {};
private:

    void pop(const fs::directory_entry &file);

    void pre(const fs::directory_entry &file);

    void explore(const fs::directory_entry &file);

    MyHandler &my_file_handler;

};


#endif //FILE_SEARCH_DFS_H
