#include <iostream>

int main() {
   double a=5.26,b=8.27;
   std::cout<<std::fixed;
   std::cout.precision(3);

   std::cout<<a*b;

}