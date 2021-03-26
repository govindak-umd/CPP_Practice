#include<iostream>
#include<set>
#include<iterator>
int main(){
    std::set<int> my_set;
    std::set<int>::iterator itr;
    std::set<int>::iterator itr2;

    // Inserting elements to a set c++

    for(int i=0; i<=10; i++){
        my_set.insert(i);
    }

    // Printing elements of the set c++

    for(itr = my_set.begin(); itr!=my_set.end(); itr++){
        std::cout << *itr << std::endl;
    }

    std::cout << " The size of the set is : " << my_set.size() << std::endl;

    // Pointing a iterator the first element of a set

    itr = my_set.begin();
    itr2 = my_set.end();

    // Erasing the first element

    my_set.erase(itr);

    std::cout << " The size of the set after removing the first element is : " << my_set.size() << std::endl;

    itr = my_set.begin();
    itr2 = my_set.end();

    // Removing everything between the two iterators

    my_set.erase(itr,itr2);

    std::cout << " The size after removing it all is : " << my_set.size() << std::endl;

    return 0;
}
