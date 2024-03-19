#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int max_sum=0;
for(int i=0;i<n;i++){
    arr[i]*=2;
    int sum=0;
    for(int j=0;j<n-1;j++){
        sum+=abs(arr[j+1]-arr[j]);
    }
    max_sum=max(max_sum,sum);
    arr[i]/=2;
}

cout<<max_sum;
}