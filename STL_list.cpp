#include<iostream>
#include<list>
#include<iterator>

void printList(std::list<int>);

int main() {

    std::list<int> my_list;

    my_list.push_back(8);
    my_list.push_back(90);
    my_list.push_back(32);
    my_list.push_back(76);
    my_list.push_back(66);

    printList(my_list);
    std::cout << "Popping from the back ... "<< std::endl;

    my_list.pop_back();
    printList(my_list);

    std::cout << "Popping from the front ... "<< std::endl;

    my_list.pop_front();
    printList(my_list);

    std::cout << "Adding more elements to the list... "<< std::endl;

    my_list.push_back(8);
    my_list.push_back(90);
    my_list.push_back(32);
    my_list.push_back(76);
    my_list.push_back(66);

    printList(my_list);

    std::cout << "Reversing the list... "<< std::endl;

    my_list.reverse();
    printList(my_list);
    std::cout << "Sorting the list... "<< std::endl;


    my_list.sort();
    printList(my_list);
    return 0;
}

void printList(std::list<int> my_list){

    std::list<int>::iterator itr;
    itr = my_list.begin();
    std::cout << "Printing elements of the list ... "<< std::endl;
    for(itr; itr!=my_list.end();++itr){
        std::cout<<*itr<<std::endl;
    }

}
