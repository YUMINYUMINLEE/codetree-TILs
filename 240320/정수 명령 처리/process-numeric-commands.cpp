#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<string,int>> arr;
    stack<int> s;

    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        if(st=="push"){
            int num;
            cin>>num;
            s.push(num);
            
        }
        else if(st=="pop"){
            int num;
            num=s.top();
            s.pop();
            cout<<num<<"\n";
        }
        else if(st=="size"){
            cout<<s.size()<<"\n";
        }
        else if(st=="empty"){
            if(s.empty()){
                cout<<"1"<<"\n";
            }
            else
                cout<<"0"<<"\n";
        }
        else if(st=="top"){
            cout<<s.top()<<"\n";
        }
    }


}