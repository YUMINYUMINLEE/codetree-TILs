#include <iostream>

using namespace std;

int main() {
    int weight=13;
    double moon_gravity=0.165;
    std::cout<<std::fixed;

    std::cout.precision(6);

    std::cout<<weight<<" * "<<moon_gravity<<" = "<<weight*moon_gravity;
}