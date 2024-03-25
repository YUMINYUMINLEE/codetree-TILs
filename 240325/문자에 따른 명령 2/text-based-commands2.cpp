#include <iostream>
#include <vector>
using namespace std;
int main() {

    int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
    int dir_num=0;
    int nx=0,ny=0;

    string op;
    int i=0;
    cin>>op;
    int n=op.size();
    while(n--){
        
        if(op[i]=='L'){
            dir_num=(dir_num-1+4)%4;
        }
        else if(op[i]=='R')
            dir_num=(dir_num+1)%4;
        else{
        nx+=dx[dir_num],ny+=dy[dir_num];}
        i++;
    }
    cout<<nx<<" "<<ny;
}