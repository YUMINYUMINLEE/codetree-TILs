#include <iostream>
using namespace std;

int N,M;

bool InRange(int x,int y){
    return (x>=0&&x<N&&y>=0&&y<N);
}
int main() {

    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1}; //위,오른쪽,아래,왼쪽;
                                       //0,    1  , 2   ,3

    cin>>N>>M;
    bool arr[100][100];

    while(M--){
        int x,y;
        cin>>x>>y;
        x-=1;y-=1;
        arr[x][y]=true;

        int cnt=0;
        for(int i=0;i<4;i++){
            if(InRange(x+dx[i],y+dy[i])&&arr[x+dx[i]][y+dy[i]]==true)
                cnt++;
        }
        if(cnt==3){
            cout<<1<<"\n";
        }
        else
            cout<<0<<"\n";
    }
}