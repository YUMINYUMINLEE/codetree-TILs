#include <iostream>
#include <vector>
using namespace std;
bool InRange(int x,int y,int n){
    return(0<=x&&x<n&&0<=y&&y<n);
}
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));

    int cntTotal=0;
    int x=0,y=0;
    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cnt1=0;
            for(int d=0;d<4;d++){
                int nx=x+dx[j],ny=y+dy[j];
                if(InRange(nx,ny,n)&&arr[nx][ny]==1){
                    cnt1++;
                }
            } 
            if(cnt1>2){
            cntTotal+=1;
        }  
        }
    }

    cout<<cntTotal;
    

}