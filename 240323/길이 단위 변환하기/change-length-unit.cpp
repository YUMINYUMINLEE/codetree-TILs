#include <iostream>

int main() {
    double one_fit=30.48;
    double one_mi=160934;

    std::cout<<std::fixed;
    std::cout.precision(1);

    std::cout<<"9.2ft = "<<9.2*one_fit<<"cm"<<std::endl;
    std::cout<<"1.3mi = "<<1.3*one_mi<<"cm";
}