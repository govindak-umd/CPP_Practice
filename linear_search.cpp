# include<iostream>
# include<vector>
using namespace std;

/**
 * Search func prototype
 */
void imp_linear_search(vector<int>,int);

/**
 * Main func for an improved linear search algo with better Big O run time efficiency
 * @return
 */
int main(){

    vector<int>my_vec{1,2,3,4,5,6,7,8,9,10};
    int to_search = 1;

    imp_linear_search(my_vec, to_search);

}

/**
 * /**
 * Search func
 * @param my_vec
 * @param to_search
 */
void imp_linear_search(vector<int> my_vec,int to_search){
    int len_vec = my_vec.size();
    for(int i = 0; i < len_vec/2; i++){
        if (my_vec[i] == to_search){
            cout << "Found it, from a left side search" << endl;
            return;
        }
        else if (my_vec[len_vec-i-1] == to_search){
            cout << "Found it, from a right side search" << endl;
            return;
        }
    }
}