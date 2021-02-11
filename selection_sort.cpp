# include<iostream>
# include<vector>
using namespace std;

void printArr(int *);

int main(){
    int arr[5]{11,25,366,98,2};
    int *arr_ptr = new int;
    arr_ptr = &arr[0];
    printArr(arr_ptr);
    delete arr_ptr;
}
void printArr(int *arr){
    cout << *arr<< endl;
    cout << *(arr+1)<< endl;
}