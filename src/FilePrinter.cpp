//
// Created by a on 8/4/20.
//

#include <algorithm>
#include <iostream>

#include "FilePrinter.h"


void FilePrinter::printTree(const std::shared_ptr<MyHandler>& in_handler) {

    std::int64_t current_deep = -1;

    std::sort(in_handler->file_path_pos.begin(), in_handler->file_path_pos.end(),
              [](auto &x1, auto &x2) -> int { return x1.first < x2.first; });

    for (auto &key_val: in_handler->file_path_pos) {
        auto &key = key_val.first;
        auto &file_path = key_val.second;

        for (size_t i = 0; i < key; i++) {
            std::cout << " ";
        }

        if (current_deep < key) {
            //new dir
            std::cout << "d " << file_path << std::endl;
            current_deep = key;
            continue;
        }


        std::cout << "   " << file_path << std::endl;
    }
}