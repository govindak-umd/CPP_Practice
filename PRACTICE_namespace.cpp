#include <iostream>

namespace namespace_1{
    int a = 155;
    int b = 89;
    inline int func_1(int a, int b){
        return a+b;
    };
}

namespace namespace_2{
    int a = 189;
    int b = 90;
    inline int func_1(int a, int b){
        return a+b;
    };
}

int main(){
    using namespace_1::a;
    using namespace_1::b;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << namespace_1::func_1(a,b) << std :: endl;

    std::cout << namespace_2::a << std::endl;
    std::cout << namespace_2::b << std::endl;
    std::cout << namespace_2::func_1(namespace_2::a,namespace_2::b) << std :: endl;
}