#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
    int n;
    cin>>n;

    vector<pair<char,int>> arr(n);

    for(int i=0;i<n;i++){
        char c;
        int num;
        cin>>c>>num;
        arr[i]=make_pair(c,num);
    }
    int nx=0;
    int ny=0;

    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    
    for(int i=0;i<n;i++){
        if(arr[i].first=='N'){
            ny+=arr[i].second*dy[1];
        }
        else if(arr[i].first=='S'){
            ny+=arr[i].second*dy[3];
        }  
        else if(arr[i].first=='W'){
            nx+=arr[i].second*dx[2];
        }  
        else if(arr[i].first=='E'){
            nx+=arr[i].second*dx[0];
        }                  
    }

    cout<<nx<<" "<<ny;
}