#include <iostream>

int main() {
    int a=5,b=6,c=7;
    int temp1,temp2;

    temp1=b;
    temp2=c;
    b=a;
    c=temp1;
    a=temp2;

    std::cout<<a<<"\n"<<b<<"\n"<<c;


}