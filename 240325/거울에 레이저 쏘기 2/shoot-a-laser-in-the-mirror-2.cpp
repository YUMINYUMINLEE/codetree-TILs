#include <iostream>
#include <vector>
using namespace std;
int n;
int StartDirection(int k){
    if(k>=1&&k<=n){
        return 2
    }
    if(k>=n+1&&k<=2n){
        return 1
    }
    if(k>=2n+1&&k<=3n){
        return 0
    }
    if(k>=3n+1&&k<=4n){
        return 3
    }
}

int main() {
    int k;
    cin>>n;
    
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};//밑,오,위,왼
    vector<vector<char>> arr(n,vector<char>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            arr[i][j]=c;
        }
    }
    cin>>k;

    


}