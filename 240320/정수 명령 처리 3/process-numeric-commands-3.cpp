#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin>>n;

    deque<int> dq;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(s=="push_front"){
            int num;
            cin>>num;
            dq.push_front(num);
        }

        if(s=="push_back"){
            int num;
            cin>>num;
            dq.push_back(num);
        }
        
        if(s=="size"){
            cout<<dq.size()<<"\n";
        }
        if(s=="empty"){
            cout<<(dq.empty()?"1":"0")<<"\n";

        }
        if(s=="front"){
            if(!dq.empty()){
                cout<<dq.front()<<"\n";}
        }
        if(s=="back"){
            if(!dq.empty()){
                cout<<dq.back()<<"\n";}
        }
        if(s=="pop_front"){
            if(!dq.empty()){
                cout<<dq.front()<<"\n";
                dq.pop_front();
            }
        }
        if(s=="pop_back"){
            if(!dq.empty()){
                cout<<dq.back()<<"\n";
                dq.pop_back();
                }
        }    
 
    }

}