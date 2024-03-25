#include <iostream>

using namespace std;

bool InRange(int x,int y,int n){
    return (x>=0&&x<n&&y>=0&&y<n);
}
int getDir(char dir_num){
    if(dir_num=='U')
        return 1;
    else if(dir_num=='D')
        return 2;
    else if(dir_num=='R')
        return 0;
    else
        return 3;

}

int main() {
    int n,t,r,c;
    char dir_num;
    cin>>n>>t>>r>>c>>dir_num;

    int dx[4]={1,0,0,-1},dy[4]={0,1,-1,0};

    int nx=r-1,ny=c-1;
    dir_num=getDir(dir_num);

    while(t--){ 
        nx=nx+dx[dir_num],ny=ny+dy[dir_num];
        if(!InRange(nx,ny,n)){
            dir_num=3-dir_num;
        }
    }
    cout<<r+1<<" "<<c+1;
}