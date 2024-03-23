#include <iostream>

int main() {
    double a,b;
    std::cin>>a>>b;
    std::cout<<fixed;
    std::cout.precision(2);

    std::cout<<a+b;
}