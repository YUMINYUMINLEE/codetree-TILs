#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> u;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="add"){
            int num;
            cin>>num;
            u.insert(num);

        }
        if(s=="remove"){
            int num;
            cin>>num;
            u.erase(num);
            
        }
        if(s=="find"){
            int num;
            cin>>num;
            if(u.find(num)!=u.end()){cout<<"true"<<"\n";}
            else
                cout<<"false"<<"\n";

        }
    
   }


}