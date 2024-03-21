#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Student{
    public:
        string name;
        int height,weight;

        Student( string name,int height,int weight){
            this->name=name;
            this->height=height;
            this->weight=weight;
        }
};

bool cmp(const Student& a,const Student& b){
    return a.height<b.height;
}

int main() {\
    int n;
    cin>>n;

    vector<Student> student;

    for(int i=0;i<n;i++){
        string s;
        int a,b;

        cin>>s>>a>>b;

        student.push_back(Student(s, a, b));
    }

    sort(student.begin(),student.end(),cmp);
      for(int i = 0; i < n; i++)
        cout << student[i].name << " " << student[i].height << " " << student[i].weight << endl;
}