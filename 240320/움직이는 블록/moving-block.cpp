#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    total/=n;
    int red=0;
    int sum=0;

    for(int i=0;i<n;i++){
        if (arr[i]>total){
            red=arr[i]-total;
            sum+=red;
        }
        else
            arr[i]+=total-arr[i];
            red-=total-arr[i];
    }
    cout<<sum;
}