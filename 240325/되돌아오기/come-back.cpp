#include <iostream>
#include <vector>
using namespace std;
int n;
int mapper[128];


int main() {
    cin>>n;
    int x=0,y=0;
    int dir;
    int dx[4]={1,0,-1,0},dy[4]{0,1,0,-1};
    mapper['E']=0;
    mapper['N']=1;
    mapper['W']=2;
    mapper['S']=3;

    int time=0;

    while(n--){
        char c;
        int num;
        cin>>c>>num;
        dir=mapper[c];
        for(int i=0;i<num;i++){
            x+=dx[dir];
            y+=dy[dir];
            time++;
            if(x==0&&y==0){
                cout<<time;
                return 0;
            }
        }
    }
    cout<<-1;
}