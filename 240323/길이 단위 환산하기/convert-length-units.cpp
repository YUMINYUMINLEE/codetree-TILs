#include <iostream>

int main() {
    double one_fit=30.48;
    double n;
    cin>>n;
    std::cout<<std::fixed;
    std::cout.precision(1);
    std::cout<<n*one_fit;
}