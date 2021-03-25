#include<iostream>

int main(){

    int a = 5;
    float b = 55.26;
    long long int c = 254648951232;
    long int d = 123456;

    std::cout << "Typeid of a : " << typeid(a).name() << std::endl;
    std::cout << "Typeid of b : " << typeid(b).name() << std::endl;
    std::cout << "Typeid of c : " << typeid(c).name() << std::endl;
    std::cout << "Typeid of d : " << typeid(d).name() << std::endl;

    return 0;
}