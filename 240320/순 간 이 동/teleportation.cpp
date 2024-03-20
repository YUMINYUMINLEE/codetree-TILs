#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
    int a,b,x,y;
    cin>>a>>b>>x>>y;

    vector<int> arr(101);

    int max_size=max({a,b,x,y});
    int total1,total2,total3;

    total1=abs(b-a);
    total2=abs(a-x)+abs(y-b);
    total3=abs(a-y)+abs(x-b);

    int total=min({total1,total2,total3});

    cout<<total;



}