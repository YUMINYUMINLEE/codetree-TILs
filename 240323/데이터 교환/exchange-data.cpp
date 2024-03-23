#include <iostream>

int main() {
    int a=5,b=6,c=7;
    int temp;
    temp=c;
    c=b;
    b=a;
    a=c;

    

    std::cout<<a<<"\n"<<b<<"\n"<<c;


}