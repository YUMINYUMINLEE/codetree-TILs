#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    int A=0,B=0;
    int honor[2]={1,1};
    int count=0;

    vector<pair<char,int>> arr;


    for(int i=0;i<n;i++){
        char x;
        int y;
        cin>>x>>y;
        arr.push_back(make_pair(x,y));
    }

    for(int i=0;i<n;i++){
        if(arr[i].first=='A'){
            A+=arr[i].second;
        }
        if(arr[i].first=='B'){
            B+=arr[i].second;
        }
        if(A>B&&honor[1]==1){
            count++;
            honor[0]=1;
            honor[1]=0;
        }    
        if(A<B&&honor[0]==1){
            count++;
            honor[0]=0;
            honor[1]=1;
        }
        if(A==B&&!(honor[0]==1&&honor[1]==1)){
            count++;
            honor[0]=1;
            honor[1]=1;
        }

    }

    cout<<count;
}