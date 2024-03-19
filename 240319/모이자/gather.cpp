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
    int home=arr[i];
    int sum=0;
    for(int j=0;j<n-1;j++){
        sum+=abs(arr[j]-arr[i]);
    }
    max_sum=max(max_sum,sum);
}

cout<<max_sum;
}