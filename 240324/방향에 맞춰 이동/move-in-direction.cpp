#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int nx=0,ny=0;
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};

    for(int i=0;i<n;i++){
        char s;
        int num;
        cin>>s>>num;
        if(s=='E'){
            nx=nx+(dx[0]*num),ny=ny+(dy[0]*num);
        }
        else if(s=='N'){
            nx=nx+(dx[1]*num),ny=ny+(dy[1]*num);
        }
        else if(s=='W'){
            nx=nx+(dx[2]*num),ny=ny+(dy[2]*num);
        }
        else if(s=='S'){
            nx=nx+(dx[3]*num),ny=ny+(dy[3]*num);    
        }
    }
    cout<<nx<<" "<<ny;
}