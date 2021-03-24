#include<iostream>

template<class T>
inline T add_these(T a, T b){
    return a + b;
}

int main(){
    int a, b;

    a = 10;
    b = 19;

    int ans_1;

    double c,d;

    c = 90.88;
    d = 9.65;

    double ans_2;

    ans_1 =  add_these<int> (a,b);

    std::cout << ans_1 << std::endl;

    ans_2 =  add_these<double> (c,d);

    std::cout << ans_2 << std::endl;
}