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
    int cnt=0;

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



   

    //첫 k인덱스를 잡고
    //StartDirection으로 방향을 잡고,
    // 모양에 따라서 방향을 설정해주고 인덱스를 갱신,cnt++해준뒤
    //격자 범위에서 벗어나면 cnt출력(마지막에서 cnt는 ++된다.)


    /*
    2번 시작(첫 k인덱스를 잡고)
    \=>위-오른 /cnt++;
    \=>왼-아래(다음칸 가면 방향이 바뀜); /cnt++;
    \=>위-오른 인데 범위 체크에서 격자 밖이므로 cnt++ break;
    출력 cnt;
    */
    /*
    5번 시작
    \=>오-위 k++/cnt++;
    \=>아래-왼(다음칸 가면 방향이 바뀜); k++/cnt++;
    \=>오-위 k++인데 범위 체크에서 격자 밖이므로 cnt++ break;
    출력 cnt;
    */
    /*
    10번 시작
    /=>왼-위 k++/cnt++;
    \=>아래-왼(다음칸 가면 방향이 바뀜); k++범위밖/cnt++;
    출력 cnt;
    */
        /*
    9번 시작
    /=>아래-오 k++/cnt++;
    \=>왼-아래(다음칸 가면 방향이 바뀜); k++범위밖/cnt++;
    출력 cnt;
    */


}