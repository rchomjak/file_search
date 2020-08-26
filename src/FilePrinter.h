//
// Created by a on 8/4/20.
//

#ifndef FILE_SEARCH_FILEPRINTER_H
#define FILE_SEARCH_FILEPRINTER_H

#include "FileHandlerAbstract.h"
#include "MyHandler.h"

namespace FilePrinter{

   void printTree(const std::shared_ptr<MyHandler>& in_handler);
};


#endif //FILE_SEARCH_FILEPRINTER_H
