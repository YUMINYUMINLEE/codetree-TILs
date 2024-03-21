#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>

using namespace std;

int main() {\
    int n;
    cin>>n;

    vector<tuple<string,int,int>> t(n);

    for(int i=0;i<n;i++){
        string s;
        int a,b;
        cin>>s>>a>>b;
        t[i]=make_tuple(s,a,b);
    }

    sort(t.begin(), t.end(), [](const tuple<string,int,int>& a,const tuple<string,int,int>& b){
        return get<1>(a)<get<1>(b);
    });

    for(int i=0;i<n;i++){
        string s;
        int a,b;
        tie(s,a,b)=t[i];
        cout<<s<<" "<<a<<" "<<b<<"\n";
    }
}