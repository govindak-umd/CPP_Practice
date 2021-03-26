#include<iostream>
#include<map>
#include<iterator>

int main(){
    std::map<char, int> my_alphabet;

    // Declare the key and value of the dictionary

    my_alphabet.insert(std::pair<char,int>('a',1));
    my_alphabet.insert(std::pair<char,int>('b',2));
    my_alphabet.insert(std::pair<char,int>('c',3));
    my_alphabet.insert(std::pair<char,int>('d',4));

    // Printing the key and value of the dictionary through
    // the iterator

    std::map<char,int>::iterator itr;

    // Pointing the iterator at the first element of the dictionary

    itr = my_alphabet.begin();

    // Printing out the dictionary

    for (itr; itr!=my_alphabet.end(); ++itr){
        std::cout << itr->first << " ";
        std::cout << itr->second << std::endl;
    }

    std::cout << " The size of the dictionary is : " << my_alphabet.size() << std::endl;

    std::map<char,int>::iterator itr2;

    my_alphabet.erase('a');

    std::cout << " The size of the dictionary after removal of a key is : " << my_alphabet.size() << std::endl;

    // Pointing the iterator back to the first element
    itr = my_alphabet.begin();
    // Pointing the other iterator to the last element
    itr2 = my_alphabet.end();

    my_alphabet.erase(itr,itr2);

    std::cout << " The size of the dictionary is : " << my_alphabet.size() << std::endl;

    return 0;

}