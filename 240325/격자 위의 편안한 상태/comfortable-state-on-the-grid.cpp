#include <iostream>
using namespace std;
bool cf[100][100];
int main() {

    int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1}; //위,오른쪽,아래,왼쪽;
                                       //0,    1  , 2   ,3


    int N,M;
    cin>>N>>M;
    bool arr[100][100];

    while(M--){
        int x,y;
        cin>>x>>y;
        x-=1;y-=1;
        arr[x][y]=true;

        int cnt=0;
        for(int i=0;i<4;i++){
            if(arr[x+dx[i]][y+dy[i]]==true)
                cnt++;
        }
        if(cnt==3){
            cout<<1<<"\n";
        }
        else
            cout<<0<<"\n";
    }
}