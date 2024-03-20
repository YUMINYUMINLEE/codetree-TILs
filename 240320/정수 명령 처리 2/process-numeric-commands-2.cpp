#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    cin>>n;

    string command="";

    queue<int> q;


    for(int i=0;i<n;i++){
        cin>>command;
        if(command=="push"){
            int num;
            cin>>num;
            q.push(num);

        }
        else if(command=="front"){
            cout<<q.front()<<"\n";

        }       
        else if(command=="pop"){
            int num;
            num=q.front();
            q.pop();
            cout<<num<<"\n";
        }
        else if(command=="empty"){
            if(q.empty()){
                cout<<"1"<<"\n";
            }
            else
                cout<<"0"<<"\n";
        }   
        else if(command=="size"){
            cout<<q.size()<<"\n";
        }                     
    }

}