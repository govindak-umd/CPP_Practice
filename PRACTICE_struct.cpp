# include<iostream>


struct chocolate{
    int sweetness;
    int wrapper_quality;
    int calories;
}lindt, toblerone, kitkat;

int main(){

    lindt.sweetness = 5;
    lindt.wrapper_quality = 76;
    lindt.sweetness = 53;

    toblerone.sweetness = 15;
    toblerone.wrapper_quality = 190;
    toblerone.calories = 106;

    kitkat.sweetness = 6;
    kitkat.wrapper_quality = 46;
    kitkat.calories = 61;

    std::cout << "The sweetness of Lindt is : "<< lindt.sweetness << std :: endl;
    std::cout << "The sweetness of toblerone is : "<< toblerone.sweetness << std :: endl;
    std::cout << "The sweetness of kitkat is : "<< kitkat.sweetness << std :: endl;
}