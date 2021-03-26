#include<iostream>
#include<unordered_map>
#include<iterator>

int main(){

    std::unordered_map<char,int> my_uno_map;
    my_uno_map['a'] = 1;
    my_uno_map['b'] = 2;
    my_uno_map['c'] = 3;
    my_uno_map['d'] = 4;
    my_uno_map['e'] = 5;
    my_uno_map['f'] = 6;

    std::unordered_map<char,int>::iterator itr;

    std::cout << "Printing all elements of the Unordered map .. " << std::endl;

    itr = my_uno_map.begin();

    for(itr;itr!=my_uno_map.end();++itr){
        std::cout << itr->first << " ";
        std::cout << itr->second<< std :: endl;
    }

    my_uno_map.erase('a');

    std::cout << "Printing all elements of the Unordered map after erasing key-a .. " << std::endl;

    itr = my_uno_map.begin();

    for(itr;itr!=my_uno_map.end();++itr){
        std::cout << itr->first << " ";
        std::cout << itr->second<< std :: endl;
    }


    return 0;
}

