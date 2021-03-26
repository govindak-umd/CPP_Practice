#include<iostream>
#include<queue>
#include<iterator>


void printQueue(std::queue<int>);

int main(){

    std::queue<int> my_queue;

    my_queue.push(5);
    my_queue.push(10);
    my_queue.push(511);
    my_queue.push(99);
    my_queue.push(58);
    my_queue.push(17);
    my_queue.push(35);
    my_queue.push(19);

    std::cout << "Back / Last Element in the queue: " <<  my_queue.back() << std::endl;
    std::cout << "Front / First Element in the queue: " <<  my_queue.front() << std::endl;

    printQueue(my_queue);

    return 0;
}

void printQueue(std::queue<int> queue_sample){
    std::cout << "Printing elements of the queue ... " << std::endl;

    int front_queue;

    while(!queue_sample.empty()){
        front_queue = queue_sample.front();
        std::cout<< front_queue << std::endl;
        queue_sample.pop();
    }
}