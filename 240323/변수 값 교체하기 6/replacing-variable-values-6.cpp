#include <iostream>

int main() {
    int a=2;
    int b=5;
    int temp;

    temp=a;
    a=b;
    b=temp;

    std::cout<<a<<"\n"<<b;
}