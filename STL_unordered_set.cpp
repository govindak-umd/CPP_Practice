#include<iostream>
#include<unordered_set>
#include<iterator>

int main(){

    std::unordered_set<int> my_uno_set;

    my_uno_set.insert(56);
    my_uno_set.insert(775);
    my_uno_set.insert(15);
    my_uno_set.insert(25);
    my_uno_set.insert(6);
    my_uno_set.insert(25);
    my_uno_set.insert(60);

    std::unordered_set<int>::iterator itr;

    itr = my_uno_set.begin();
    for(itr; itr!=my_uno_set.end(); ++itr){
        std::cout << *itr << std::endl;
    }

    std::cout << "Length of the unordered set : " << my_uno_set.size() << std::endl;
    // Resetting itr back to point at the first element

    itr = my_uno_set.begin();
    std::unordered_set<int>::iterator itr2;

    std::cout << "Erasing all elements" << std::endl;
    my_uno_set.erase(itr,itr2);
    std::cout << "Length of the unordered set : " << my_uno_set.size() << std::endl;


    return 0;
}
