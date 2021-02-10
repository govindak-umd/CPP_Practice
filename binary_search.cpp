# include<iostream>
# include<vector>
#include <algorithm>

using namespace std;

/**
 * Search func prototype
 */
void binary_search(vector<int>,int);

/**
 * Function to print my vector
 */
void print_vec(vector<int>);
/**
 * Main func to do binary search
 * @return
 */
int main(){
    vector<int>my_vec{1,2,3,4,5,6,8,9,10};
    int to_search = 8;

    binary_search(my_vec, to_search);
}

/**
 * Func to print vector
 * @param my_vec
 */
void print_vec(vector<int>my_vec){
    for (auto elem: my_vec){
        cout << elem;
    }
    cout << endl;
}
/**
 * Binary Search Function
 * @param my_vec
 * @param to_search
 */
void binary_search(vector<int> my_vec,int to_search){

    // Sorting the vector

    sort(my_vec.begin(), my_vec.end());

    // Completing the while loop to do binary search
    while (true){
        print_vec(my_vec);
        size_t vec_len = my_vec.size()/2;
        size_t mid_vec_len = my_vec.size()/2;
        if (to_search < my_vec[mid_vec_len]){
            std::vector<int>my_vec2(my_vec.begin(),my_vec.begin()+mid_vec_len);
            my_vec = my_vec2;
        }
        else if (to_search > my_vec[mid_vec_len]){
            std::vector<int>my_vec2(my_vec.begin()+mid_vec_len,my_vec.end());
            my_vec = my_vec2;
        }
        else if(to_search == my_vec[mid_vec_len]){
            cout << "Number found" << endl;
            break;
        }
    }
}