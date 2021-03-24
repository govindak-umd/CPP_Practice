#include<iostream>

int main(){

    int n = 101;
    test_label:
    while(n>0){
        n-=1;
        if (n%10 == 0){
            goto test_label;
        }
        std::cout << "n is : " << n << std  :: endl;
    }
}