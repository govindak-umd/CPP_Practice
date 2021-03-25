#include<iostream>

class RacingPoints{
    public:

    int points;

    //Implementation 1

    friend RacingPoints operator +(const RacingPoints&, const RacingPoints&);

    //Implementation 2

    // RacingPoints operator +(const RacingPoints&);

    RacingPoints operator -(const RacingPoints&);

    friend std::ostream& operator<<(std::ostream&, const RacingPoints&);

};

//Implementation 1

RacingPoints operator +(const RacingPoints& race_1, const RacingPoints& race_2){
    RacingPoints race_3;
    race_3.points = race_1.points + race_2.points;
    return race_3;
}

//Implementation 2

//RacingPoints RacingPoints::operator+ (const RacingPoints& race_1_points){
//    RacingPoints new_race;
//    new_race.points = race_1_points.points + points;
//    return new_race;
//}

RacingPoints RacingPoints::operator- (const RacingPoints& race_1_points){
    RacingPoints new_race;
    new_race.points = race_1_points.points - points;
    return new_race;
}

std::ostream& operator<<(std::ostream& os, const RacingPoints& race_1_points)
{
    os << race_1_points.points << std::endl;
    return os;
}


int main(){
    RacingPoints race_1;
    race_1.points = 510;

    RacingPoints race_2;
    race_2.points = 250;


    RacingPoints race_3;

    race_3 = race_1 + race_2;

    std::cout << "Sum of racing points : " << race_3.points <<  std::endl;

    RacingPoints race_4;

    race_4 = race_1 - race_2;

    std::cout << "Difference of racing points : " << abs(race_4.points) <<  std::endl;

    std::cout <<  "race_1 points : " << race_1 << std::endl;
    std::cout <<  "race_2 points : " << race_2 << std::endl;

    return 1;
}