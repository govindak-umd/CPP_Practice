#include<iostream>

int main(){
    int a{1};
    int b{2};

    int c;

    std :: cout << " a is : "  << a << std :: endl;
    std :: cout << " b is : "  << b << std :: endl;

    c = a > b ? 3 : 5;

    std :: cout << "As per the condition a > b, we have c = " << c << std :: endl;
}