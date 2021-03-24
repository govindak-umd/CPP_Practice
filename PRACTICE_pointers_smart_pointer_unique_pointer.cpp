//
// Created by govind on 12/1/20.
//

/*
 * headers
 */
#include <iostream>
#include <memory>

/**
 * Smart pointer has no memory leaks
 * because the destructor is called at the end of the
 * scope. For example, when the pointer is out
 * of scope or when there is an exception that is raised.
 */
void basicUniquePointerTest(){
    std::unique_ptr<int>test_ptr(new int(33));
    std::cout << *test_ptr << std::endl;
}

/*
 * Unique pointers cannot be copied. It can only be
 * moved from one to another.
 */
void uniquePtrMoveTest(){
    std::unique_ptr<int>test_ptr(new int(59));
    std::unique_ptr<int>test_ptr2(std::move(test_ptr));
    std::cout << *test_ptr2 << std::endl;
}

/*
 * main func to test out the functions declared above
 */
int main(){
    basicUniquePointerTest();
    uniquePtrMoveTest();
}
