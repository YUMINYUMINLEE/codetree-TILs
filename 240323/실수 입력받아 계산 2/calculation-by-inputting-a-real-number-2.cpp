#include <iostream>

int main() {
    double a;
    std::cin>>a;
    std::cout<<std::fixed;
    std::cout.precision(2);
    std::cout<<a+1.5;
}