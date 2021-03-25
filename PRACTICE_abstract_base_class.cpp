#include<iostream>

class Shape{
public:
    int sides;
//    virtual void printSides(); // This is not pure virtual
    virtual void printSides() = 0; // This is pure virtual,
    // hence object can't be made off of this
};

class Triangle:public Shape{
public:
    void printSides();
};

class Rectangle:public Shape{
public:
    void printSides();
};

int main(){

    // One way to access the funcs

//    Triangle triangle;
//    triangle.printSides();

//    Rectangle rectangle;
//    rectangle.printSides();

    // Another way to access the funcs

    Triangle triangle;

    Rectangle rectangle;

    Shape * shape = &triangle;
    Shape * shape2 = &rectangle;

    shape->printSides();
    shape2->printSides();
    return 0;
}

void Triangle::printSides(){
    std::cout<<"There are 3 sides" << std::endl;
}

void Rectangle::printSides(){
    std::cout<<"There are 4 sides" << std::endl;
}