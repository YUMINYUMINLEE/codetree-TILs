#include <iostream>

using namespace std;


int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};//오른쪽,아래,,왼쪽
int n,t;
int r,c,dir;
int mapper[128];

bool InRange(int x,int y){
    return (x>=0&&x<n&&y>=0&&y<n);
}
void Simulate() {
    while(t--) {
        int nx = r+ dx[dir], ny = c + dy[dir];
        if(InRange(nx, ny)) {
            r = nx, c = ny;
        }
        else
            dir = 3 - dir;
    }
}

int main() {
    char dir_num;
    cin>>n>>t>>r>>c>>dir_num;

    mapper['R']=0;
    mapper['D']=1;
    mapper['U']=2;
    mapper['L']=3;

    r=r-1,c=c-1;
    dir=mapper[dir_num];

    Simulate();

    cout<<r+1<<" "<<c+1;
}