#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(2));

    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    int min_size=INT_MAX;
    for(int i=0;i<n;i++){
        int size=0;
        int maxX=0, maxY=0,minX=INT_MAX, minY=INT_MAX;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;}
            int x1=arr[j][0],y1=arr[j][1];
            maxX=max(maxX,x1);
            maxY=max(maxY,y1);
            minX=min(minX,x1);
            minY=min(minY,y1);
        }
        size=(maxX - minX) * (maxY - minY);
        min_size=min(min_size,size);
    }
    cout<<min_size;

}