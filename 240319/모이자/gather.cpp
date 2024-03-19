#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
   int n;
   cin>>n;
   vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int min_sum=INT_MAX;
for(int i=0;i<n;i++){
    int home=arr[i];
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=abs(i-j)*arr[j];
    }
    min_sum=min(min_sum,sum);
}

cout<<min_sum;
}