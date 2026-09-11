
// accessing static member

#include<iostream>
using namespace std;

class student{
    public:
    static string college;

};

string student::college = "SLIET";

int main(){

    cout<<student::college<<endl;
    return 0;
}