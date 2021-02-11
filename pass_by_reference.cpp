# include<iostream>
# include<vector>

using namespace std;

void printNum(int&);
int main(){

    int a = 5;
    printNum(a);
}

void printNum(int& num){
    cout << "Num is :" << num;
}
