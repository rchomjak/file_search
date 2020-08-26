//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_TOPOSORT_H
#define FILE_SEARCH_TOPOSORT_H

#include "FileHandlerAbstract.h"
#include "MyHandler.h"
#include "DFSInterface.h"

class TopoSort: public DFSInterface {

public:

    void execute();

    explicit TopoSort(const std::shared_ptr<FileHandlerAbstract>& in_handler)
    : my_file_handler(dynamic_cast<MyHandler *>(in_handler.get())) {};

    ~TopoSort() override {};

private:

    void post() override;
    void pre() override;
    void explore(const fs::directory_entry &in_file) override;

    MyHandler *my_file_handler;

};


#endif //FILE_SEARCH_TOPOSORT_H
