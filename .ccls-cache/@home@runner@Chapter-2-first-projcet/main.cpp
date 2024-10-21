
#include <iostream>
using namespace std;

int main() {
    const int total_customers = 16500;
    const double energy_drinkers_percentage = 0.15;
    const double citrus_drinkers_percentage = 0.58;

    int energy_drinkers = total_customers * energy_drinkers_percentage;
    int citrus_drinkers = energy_drinkers * citrus_drinkers_percentage;

    cout << "Number of customers who buy one or more energy drinks per week: " << energy_drinkers << endl;
    cout << "Number of customers who prefer citrus-flavored energy drinks: " << citrus_drinkers << endl;

    return 0;
}
