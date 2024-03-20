#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    int X,Y;
    cin>>X>>Y;
    int max_sum=0;
    for(int i=X;i<=Y;i++){
        int sum=0;
        string goal=to_string(i);
        for(int j=0;j<goal.size();j++){
            sum+=static_cast<int>(goal[j]);
        }
        max_sum=max(max_sum,sum);
    }
    cout<<max_sum;
}