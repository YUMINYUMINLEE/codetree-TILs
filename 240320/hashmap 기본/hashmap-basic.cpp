#include <iostream>
#include <unordered_map>

using namespace std;
int main() {
    unordered_map<int,int> um;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="add"){
            int num1;
            int num2;
            cin>>num1>>num2;
            um.insert({num1,num2});
        }
        if(s=="find"){
            int num;
            cin>>num;
            if(um.find(num)!=um.end()){
                cout<<(um.find(num))->second<<"\n";
                um.erase(num);
            }
            else
                cout<<"None"<<"\n";
        }
        if(s=="remove"){
            int num;
            cin>>num;
            um.erase(num);
        }        

   }
}