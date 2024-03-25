#include <iostream>
#include <vector>
using namespace std;
int n;

bool InRange(int x,int y,int n){
    return(x>=0&&x<n&&y>=0&&y<n);
}


int main() {
    cin>>n;
    vector<vector<int>> a(n,vector<int>(n));

    for(int i=0;i<n;i++){     
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
  

    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
    int total=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            int x=j,y=k;
            int cnt=0;
            for(int i=0;i<4;i++){
                int nx=x+dx[i],ny=y+dy[i];
                if(InRange(nx,ny,n)&&a[nx][ny]==1){
                    cnt++;
                }
            }
            if(cnt>=3){
                total+=1;
            }
        }        
    }
    cout<<total;
}