#include<iostream>

class Laptop{
private:
    std::string processor{"Intel"};
protected:
    int ram{8};
public:
    std::string name;
    void printLaptopInfo();
    virtual void setCost(int);
    virtual void printPrice();
    Laptop();
    ~Laptop();
};

class Dell: public Laptop{
private:
    int cost;
public:
    void setCost(int);
    void printPrice();
    Dell();
    ~Dell();
};

class Razer: public Laptop{
private:
    int cost;
public:
    void setCost(int);
    void printPrice();
    Razer();
    ~Razer();
};

int main(){
    Razer razer;
    razer.setCost(1500);
    razer.name = "Razer Blade 15";

    Dell dell;
    dell.setCost(2000);
    dell.name = "XPS 13";

    Laptop * laptop1 = &razer;
    Laptop * laptop2 = &dell;

    laptop1->printLaptopInfo();

    // In the below 2 example, the functions can be
    // accessed like this from the base class only because
    // they are declared as virtual in the base class
    // followed by empty function declarations

    laptop1->printPrice();
    laptop2-> printPrice();

    return 0;
}

void Laptop::setCost(int a){

}
void Laptop::printPrice(){

}

void Laptop::printLaptopInfo(){
    std::cout << "Printing laptop information ... " << std::endl;
    std::cout << "This is : " << name << std::endl;
    std::cout << "RAM : "<< ram << "\nProcessor " << processor << std::endl;
}
Laptop::Laptop(){
    std::cout << "Laptop Constructor called ... " << std::endl;

}
Laptop::~Laptop(){
    std::cout << "Laptop Destructor called ... " << std::endl;
}


void Dell::setCost(int price){
    cost = price;
}

void Dell::printPrice(){
    std::cout << "This Dell laptop costs : $" << cost << std::endl;
};

Dell::Dell(){
    std::cout << "Dell Constructor called ... " << std::endl;

}
Dell::~Dell(){
    std::cout << "Dell Destructor called ... " << std::endl;

}

void Razer::setCost(int price){
    cost = price;
}

void Razer::printPrice(){
    std::cout << "This Razer laptop costs : $" << cost << std::endl;
};

Razer::Razer(){
    std::cout << "Razer Constructor called ... " << std::endl;

}
Razer::~Razer(){
    std::cout << "Razer Destructor called ... " << std::endl;

}