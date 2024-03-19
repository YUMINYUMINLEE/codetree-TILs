#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
   int n,k;

   cin>>n>>k;

   vector<int> arr(n);

   for(int i=0;i<n;i++){
        cin>>arr[i];
   }

   int max_sum=0;


   for(int i=0;i<n-k+1;i++){
        int sum=0;
        for(int j=i;j<i+k;j++){
            sum+=arr[j];
        }
        max_sum=max(max_sum,sum);
   }

   cout<<max_sum;

}