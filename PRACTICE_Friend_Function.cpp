#include<iostream>


class Chocolate{
private:
    std::string name;
    int cost;
public:
    void printName();
    friend void printCost(Chocolate);

    void setCost(int);

    Chocolate(std::string, int);
    ~Chocolate();
};

void Chocolate::setCost(int new_cost){
    cost = new_cost;
}
void Chocolate::printName() {
    std::cout << name << std::endl;
}

void printCost(Chocolate obj) {
    std::cout << obj.cost << std::endl;
}

// Constructor
Chocolate::Chocolate(std::string choc_name, int choc_cost){
    name = choc_name;
    cost = choc_cost;
    std::cout << "Constructor called" << std::endl;
}

//Destructor
Chocolate::~Chocolate(){
    std::cout << "Destructor called" << std::endl;
}

int main(){
    int cost{5};
    std::string name {"Snickers"};
    Chocolate chocolate(name, cost);

    //Attempting to access these information back
    chocolate.printName();

    // Since this is a friend function
    printCost(chocolate);

    //Attempting to set the name through a func
    int new_cost = 99;
    chocolate.setCost(new_cost);

    printCost(chocolate);

}