#include<iostream>
#include<stack>
#include<iterator>

void printStack(std::stack<int>);

int main(){
    std::stack<int> my_stack;

    my_stack.push(5);
    my_stack.push(10);
    my_stack.push(511);
    my_stack.push(99);
    my_stack.push(58);
    my_stack.push(17);
    my_stack.push(35);
    my_stack.push(19);

    std::cout << "Top element : " <<  my_stack.top() << std::endl;

    printStack(my_stack);

    std::cout << "Stack size is : " << my_stack.size() <<std::endl;

    std::cout << "Stack Popping ... " <<std::endl;

    while(!my_stack.empty()){
        my_stack.pop();
    }

    std::cout << "Stack size is : " << my_stack.size() <<std::endl;

    return 0;
}

void printStack(std::stack<int> stack_sample){
    std::cout << "Stack Elements in Order: " << std::endl;

    int top_stack;

    while(!stack_sample.empty()){
        top_stack = stack_sample.top();
        std::cout << c << std::endl;
        stack_sample.pop();
    }
}
