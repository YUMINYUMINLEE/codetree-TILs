#include <iostream>
#include <vector>

using namespace std;


vector<int> answer;

void Print(){
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<endl;
}
void Choose(int curr_num,int K,int N){
    if(curr_num==N+1){
        Print();
        return;
    }

    for(int i=1;i<=K;i++){
        answer.push_back(i);
        Choose(curr_num+1,K,N);
        answer.pop_back();
    }
    return;
}
int main() {
    int K,N;
    cin>>K>>N;
    Choose(1,K,N);
    return 0;
}