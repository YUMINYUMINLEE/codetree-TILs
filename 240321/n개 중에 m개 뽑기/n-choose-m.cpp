#include <iostream>
#include <vector>

using namespace std;
int n;
vector<int> answer;

void Print(){
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    cout<<"\n";
}

void Choose(int curr_num,int m,vector<int>& arr){
    if(curr_num==m+1){
    
        for(int i=0;i<answer.size()-1;i++){
            if(answer[i]>=answer[i+1]){
                return;
            }
        }
                                                                           
        Print();
        return;
    }

    for(int i=1;i<=n;i++){
        if(arr[i-1]==1){
            continue;
        }
        else{
            answer.push_back(i);
            arr[i-1]=1;
        }
        Choose(curr_num+1,m,arr);
        answer.pop_back();
        arr[i-1]=0;

    }
}

int main() {
    int m;
    cin>>n>>m;
    vector<int> arr(n);
    Choose(1,m,arr);
    return 0;
}