//
// Created by a on 8/5/20.
//

#ifndef FILE_SEARCH_DFSINTERFACE_H
#define FILE_SEARCH_DFSINTERFACE_H

#include <filesystem>
namespace fs = std::filesystem;

class DFSInterface:public std::enable_shared_from_this<DFSInterface> {

public:
    virtual ~DFSInterface() {};

private:
    virtual void pre() = 0;
    virtual void post() = 0;
    virtual void explore(const fs::directory_entry &in_file) = 0;

};

#endif //FILE_SEARCH_DFSINTERFACE_H
