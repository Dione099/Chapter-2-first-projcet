#include <iostream>
using namespace std;
int main() {
    const double gallons_in_tank = 20;
    const double mpg_town = 23.5;
    const double mpg_highway = 28.9;

    double distance_town = gallons_in_tank * mpg_town;
    double distance_highway = gallons_in_tank * mpg_highway;

    cout << "Distance the car can travel in town: " << distance_town << " miles" << endl;
    cout << "Distance the car can travel on the highway: " << distance_highway << " miles" << endl;

    return 0;
}

