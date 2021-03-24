# include<iostream>

struct movie{
    std::string title;
    int year;
};

int main(){
    movie my_movie;
    movie * my_movie_ptr;
    my_movie_ptr = & my_movie;

    my_movie_ptr->title = "FAST and Furious 6";
    my_movie_ptr->year = 2013;

    return 0;
}