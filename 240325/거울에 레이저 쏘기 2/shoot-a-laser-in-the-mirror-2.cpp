#include <iostream>
#include <vector>
using namespace std;
int n;
//k의 시작 위치
bool InRange(int x,int y){
    return(x>=0&&x<n&&y>=0&&y<n);

}
int StartDirection(int k){
    if(k>=1&&k<=n){
        return 2;
    }
    if(k>=n+1&&k<=2*n){
        return 1;
    }
    if(k>=2*n+1&&k<=3*n){
        return 0;
    }
    if(k>=3*n+1&&k<=4*n){
        return 3;
    }
}

int main() {
    int k;
    cin>>n;
    
    int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};//밑,오,위,왼
    vector<vector<char>> arr(n,vector<char>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            arr[i][j]=c;
        }
    }
    cin>>k;
    int dir;
    int kx,ky;
    int cnt=1;

    dir=StartDirection(k);
    int offset=k%n==0?n:k%n;
    while(true){
        if(dir==0){
            kx=n-1,ky=n-offset-1;
            if(arr[kx][ky]=='\\'){
                dir=3;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=1;  
            }
            if(arr[kx][ky]=='/'){
                dir=1;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=3;
            }

        }
        if(dir==1){
            kx=offset-1,ky=n-1;
            if(arr[kx][ky]=='\\'){
                dir=2;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=0;  
            }
            if(arr[kx][ky]=='/'){
                dir=0;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=2;
            }
        }
        if(dir==2){
            kx=0,ky=offset-1;
            if(arr[kx][ky]=='\\'){
                dir=1;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=3;  
            }
            if(arr[kx][ky]=='/'){
                dir=3;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=1;
            }
        }
        if(dir==3){
            kx=n-offset-1,ky=0;
            if(arr[kx][ky]=='\\'){
                dir=0;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=2;  
            }
            if(arr[kx][ky]=='/'){
                dir=2;
                kx+=dx[dir],ky+=dy[dir];
                cnt++;
                if(!InRange(kx,ky)){
                    cout<<cnt;
                    break;
                }
                dir=0;
            }
        }
    }

}