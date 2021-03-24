#include <iostream>

using namespace std;

int main(){

    int n_int = 55;

    int *pointer_n = &n_int;

//    (*pointer_n)++;
    cout << "n : " << n_int << endl;
    cout << "pointer_n : " << pointer_n << endl;
    cout << "*pointer_n : " << *pointer_n << endl;

    const int * pointer_n2 = &n_int;

    *pointer_n2++; // Can't increment what it is pointing to. What it
    //points to is a constant

    cout << "pointer_n2 : " << pointer_n2 << endl;
    cout << "*pointer_n2 : " << *pointer_n2 << endl;

    int  * const pointer_n3 = &n_int;

//    pointer_n3++; // Can't increment. The pointer is a constant


    cout << "-- long int now onwards --" << endl;

    long int n_int_long = 100;

    long int *pointer_n4 = & n_int_long;

    cout << "n_int_long : " << n_int_long << endl;
    cout << "pointer_n4 : " << pointer_n4 << endl;
    cout << "*pointer_n4 : " << *pointer_n4 << endl;

    const long int *pointer_n5 = &n_int_long;

    cout << "n_int_long : " << n_int_long << endl;
    cout << "pointer_n5 : " << pointer_n5 << endl;
    cout << "*pointer_n5 : " << *pointer_n5 << endl;



    return 1;
}