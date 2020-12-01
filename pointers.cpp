//
// Created by govind on 12/1/20.
//

#include <iostream>

/**
 * Normal pointer has memory leaks
 */
void my_func(){
    int* dummy_ptr = new int (20);
    std::cout << *dummy_ptr<< std::endl;
    delete dummy_ptr;
}
int main(){
    my_func();
}
