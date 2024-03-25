#include <iostream>

using namespace std;
string s;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};//북동남서
int main() {
    int x=0,y=0;
    cin>>s;
    int time=0;
    int dir=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='F'){
            x+=dx[dir],y+=dy[dir];
        }
        else if(s[i]=='L'){
            dir=(dir-1+4)%4;    
        }
        else if(s[i]=='R'){
            dir=(dir+1)%4;
        }
        time++;
        if(x==0&&y==0){
            cout<<time;
            return 0;
        }
    }

    cout<<-1;

    return 0;
}