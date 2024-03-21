#include <iostream>
#include <vector>

using namespace std;
#define MAX_N 3

int n;
bool visited[MAX_N+1];
vector<int> answer;

void Print(){
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<"\n";
}

void Choose(int curr_num){
    if(curr_num==n+1){
        Print();
        return;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]){continue;}

        visited[i]=true;
        answer.push_back(i);

        Choose(curr_num+1);
        answer.pop_back();
        visited[i]=false;
    }
}

int main(){
    cin>>n;
    Choose(1);
    return 0;
}