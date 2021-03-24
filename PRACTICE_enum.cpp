#include <iostream>

enum cars{Ferrari = 458, Porsche = 911, Mclaren = 675 , Pagani = 86};
int main(){
    cars my_porsche {Porsche};
    std::cout << my_porsche << std::endl;

    cars my_ferrari {Ferrari};
    std::cout << my_ferrari << std::endl;
    return 0;
}
