#include<iostream>

void sampleFunction(int, int);
void sampleFunction2(int& , int&);
void sampleFunction3(const int& , const int&);
int main(){
    int a, b;
    a = 6;
    b = 9;
    std::cout << "The numbers are : " << a << " " << b << std::endl;

    //passing directly
    sampleFunction(a,b);

    //passing by reference
    sampleFunction2(a,b);

    std::cout << "But since the reference changed the original value also changed to : \n" <<  a << std::endl;

    std :: cout << "After resetting the value of a: ... " << std::endl;
    a = 6;


}

//Direct Copy

void sampleFunction(int num_1, int num_2){
    std::cout<<"Passing directly ... "<< std::endl;
    num_1+=1;
    num_2+=1;
    std::cout << "The numbers have been changed to : " << num_1 << " " << num_2 << std::endl;
}

//Passing by reference
void sampleFunction2(int& num_1, int& num_2){
    std::cout<<"Passing by reference... "<< std::endl;
    num_1+=1;
    num_2+=1;
    std::cout << "The numbers have been changed to : " << num_1 << " " << num_2 << std::endl;
}

//void sampleFunction2(const int& num_1 , const int& num_2){
//    std::cout<<"Passing by const reference. Should throw an error ... "<< std::endl;
//    try {
//        num_1 += 1;
//        num_2 += 1;
//        std::cout << "The numbers have been changed to : " << num_1 << " " << num_2 << std::endl;
//    } catch (...){
//        std :: cout << "Exception caught! " << std :: endl;
//    }
//}