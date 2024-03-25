#include <iostream>

using namespace std;
int n,m;
int x=0,y=0;
int dir=0;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int num=n*m;
int answer[100][100];
int result[100][100];

bool InRange(int x,int y){
    return(x>=0&&x<n&&y>=0&&y<m);
}

void Simulation(){
    for(int i=1;i<n*m;i++){
            int nx=x+dx[dir],ny=y+dy[dir];
            if(!InRange(nx,ny)||answer[nx][ny]==1){
                dir=(dir+1)%4;
            }
            x=x+dx[dir],y=y+dy[dir];
            answer[x][y]=1;
            result[x][y]=result[x-dx[dir]][y-dy[dir]]+1;
    }
    
}
int main() {
    cin>>n>>m;
    answer[0][0]=1;
    result[0][0]=1;

    Simulation();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }
}