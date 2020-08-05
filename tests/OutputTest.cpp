//
// Created by a on 8/5/20.
//

#include <algorithm>
#include <unordered_map>
#include "gtest/gtest.h"
#include "MyHandler.h"
#include "TopoSort.h"

TEST(OutputTest, test1) {

    std::unordered_map<std::string, int> correct_pos = {{"a", 0}, {"b", 0}, {"c", 1}};

    MyHandler my_handler = MyHandler(std::string("."));
    TopoSort my_dfs = TopoSort(my_handler);
    my_dfs.execute();


    sort(my_handler.file_path_pos.begin(), my_handler.file_path_pos.end(), [](auto &x1, auto &x2)->int{return x1<x2;});

    for (auto &key_val: my_handler.file_path_pos){

        auto &key_int = key_val.first;
        auto &val_str = key_val.second;
        std::cout<<key_int<< " " <<val_str<<std::endl;
        ASSERT_EQ(correct_pos.at(val_str), key_int);

    }


}