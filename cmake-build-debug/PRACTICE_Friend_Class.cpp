#include<iostream>

class Ferrari488{
private:
    int speed = 360;
public:
    friend class Ferrari458;
    Ferrari488();
    ~Ferrari488();
};

class Ferrari458 {
public:
    void Drive();

    void getTurbocharged(Ferrari488);

    Ferrari458();
    ~Ferrari458();
};

Ferrari458::Ferrari458() {
    std::cout << "My Ferrari 458 being built ... " << std::endl;
}

Ferrari488::Ferrari488() {
    std::cout << "My Ferrari 488 being built ... " << std::endl;
}

Ferrari458::~Ferrari458() {
    std::cout << "My Ferrari 458 crashed ... " << std::endl;
}

Ferrari488::~Ferrari488() {
    std::cout << "My Ferrari 488 crashed ... " << std::endl;
}



void Ferrari458::Drive(){
    std::cout << "Driving my Ferrari 458 ... " << std::endl;

}
void Ferrari458::getTurbocharged(Ferrari488 ff){
    int sp = ff.speed;
    std::cout << "Now turbocharging Ferrari 488 with speed : " << sp << std::endl;
}

int main(){
    Ferrari458 ff458;
    ff458.Drive();

    Ferrari488 ff488;
    ff458.getTurbocharged(ff488);

    return 1;
}