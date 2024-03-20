#include <iostream>
#include <string>
#include <tuple>

using namespace std;


int main(){
    string s;
    char c;
    int num;
    cin>>s>>c>>num;
    tuple<string,char,int> t=make_tuple(s,c,num);
    string v1;
    char v2;
    int v3;

    tie(v1,v2,v3)=t;
    cout<<"secret code : "<<v1<<"\n";
    cout<<"meeting point : "<<v2<<"\n";
    cout<<"time : "<<v3<<"\n";
}