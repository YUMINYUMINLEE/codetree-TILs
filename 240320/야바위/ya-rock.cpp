#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int> cups(3);

    int max_score=0;

    for(int i=0;i<3;i++){
        cups={0,0,0};
        cups[i]=1;
        int score=0;
        for(int j=0;j<n;j++){
            int a,b,c;
            int temp;
            cin>>a>>b>>c;
            temp=cups[a];
            cups[a]=cups[b];
            cups[b]=temp;
            if(cups[c]==1){
                score+=1;
            }
        }
        max_score=max(max_score,score);
    }
    cout<<max_score;
}