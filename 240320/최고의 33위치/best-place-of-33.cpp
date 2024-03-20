#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   int n,start=0;
   cin>>n;

   vector<vector<int>> arr(n,vector<int>(n));

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
   }
    int max_sum = 0;
    for (int i = 0; i <= n - 3; i++) { 
        for (int j = 0; j <= n - 3; j++) {
            int sum = 0;
            for (int x = i; x < i + 3; x++) {
                for (int y = j; y < j + 3; y++) {
                    sum += arr[x][y];
                }
            }
            max_sum = max(max_sum, sum); //
    }}


    cout<<max_sum;

}