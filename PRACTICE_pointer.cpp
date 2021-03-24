# include<iostream>
# include<vector>
# include<memory>

using namespace std;

int main(){

    // normal pointer

    int a = 66;

    int *ptr_norm = &a;

    cout << *ptr_norm << endl;

    // Unique Pointer C++ Practice

    a = 85;
    unique_ptr<int>ptr1(&a);
    cout << *ptr1 << endl;
    cout << ptr1.get() << endl;

    unique_ptr<int>ptr2 = move(ptr1);
    cout << *ptr2 << endl;
    cout << ptr2.get() << endl;

    a = 55;
    cout << *ptr2 << endl;
    cout << ptr2.get() << endl;

    ptr2.release();

    //Shared Pointer

}
