#include <iostream>

int main() {
    int a=5,b=6,c=7;
    int temp;

    temp=a;
    a=c;
    c=b;
    b=temp;

    

    std::cout<<a<<"\n"<<b<<"\n"<<c;


}