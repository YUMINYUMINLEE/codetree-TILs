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
        fill(cups.begin(), cups.end(), 0);
        cups[i]=1;
        int score=0;
        for(int j=0;j<n;j++){
            int a,b,c;
            cin>>a>>b>>c;
            int temp=cups[a-1];
            cups[a-1]=cups[b-1];
            cups[b-1]=temp;
            if(cups[c-1]==1){
                score+=1;
            }
        }
        if(score>max_score){
            max_score=score;
        }
    }
    cout<<max_score;
}