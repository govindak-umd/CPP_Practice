#include<iostream>
#include<queue>
#include<iterator>

void printPq(std::priority_queue<int>);

int main(){

    std::cout <<"Basic Priority Queue Example" << std::endl;

    std::priority_queue<int> my_pq;

    my_pq.push(78);
    my_pq.push(5);
    my_pq.push(5);
    my_pq.push(52);
    my_pq.push(62);
    my_pq.push(30);
    my_pq.push(30);
    my_pq.push(776);

    printPq(my_pq);

    std::cout << "Popping the largest element and popping again .. " << std::endl;

    my_pq.pop();

    printPq(my_pq);

    return 0;
}

void printPq(std::priority_queue<int> pq){

    std::cout << "Printing the Priority Queue ... " << std::endl;

    while(!pq.empty()){
        std::cout << pq.top() << std :: endl;
        pq.pop();
    }
}