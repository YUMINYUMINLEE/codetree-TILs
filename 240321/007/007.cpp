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

        string v1=get<0>(t);
        char v2=get<1>(t);
        int v3=get<2>(t);

    cout<<"secret code : "<<v1<<"\n";
    cout<<"meeting point : "<<v2<<"\n";
    cout<<"time : "<<v3<<"\n";
}