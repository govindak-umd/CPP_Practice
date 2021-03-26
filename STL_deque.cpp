#include<iostream>
#include<deque>
#include<iterator>

void printDeQueueBack(std::deque<int>);
void printDeQueueFront(std::deque<int>);

int main(){

    std::deque<int> my_deque;

    std::cout <<"Pushback of elements .... " << std::endl;

    my_deque.push_back(1);
    my_deque.push_back(2);
    my_deque.push_back(3);
    my_deque.push_back(4);
    my_deque.push_back(5);

    printDeQueueBack(my_deque);

    int new_elem = 77;
    int new_elem2 = 90;
    std::cout << "Adding an element " << new_elem <<" to front " << std::endl;
    std::cout << "Adding an element " << new_elem2 <<" to front " << std::endl;

    my_deque.push_front(new_elem);
    my_deque.push_front(new_elem2);

    new_elem = 55;
    new_elem2 = 30;
    std::cout << "Adding an element " << new_elem <<" to back" << std::endl;
    std::cout << "Adding an element " << new_elem2 <<" to back " << std::endl;

    my_deque.push_back(new_elem);
    my_deque.push_back(new_elem2);

    printDeQueueBack(my_deque);

    printDeQueueFront(my_deque);

    return 0;
}

void printDeQueueBack(std::deque<int> my_deque){
    std::cout << "Printing Deque elements from the back most ..." << std::endl;

    while(!my_deque.empty()){
        std::cout << my_deque.back()<<std::endl;
        my_deque.pop_back();
    }
}

void printDeQueueFront(std::deque<int> my_deque){
    std::cout << "Printing Deque elements from the Front most ..." << std::endl;

    while(!my_deque.empty()){
        std::cout << my_deque.front()<<std::endl;
        my_deque.pop_front();
    }
}

