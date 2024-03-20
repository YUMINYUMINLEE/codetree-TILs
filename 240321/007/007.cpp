#include <iostream>
#include <string>

using namespace std;

class Program{
    public:
        string secretCode;
        char meetingPoint;
        int time;

    Program(string secretCode,char meetingPoint,int time){
        this->secretCode=secretCode;
        this-> meetingPoint= meetingPoint;
        this->time=time;
    }

};

int main(){
    string s;
    char c;
    int num;
    cin>>s>>c>>num;
    Program program=Program(s,c,num);

    cout<<"secret code : "<<program.secretCode<<"\n";
    cout<<"meeting point : "<<program.meetingPoint<<"\n";
    cout<<"time : "<<program.time<<"\n";
}