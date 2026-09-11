#include <iostream>
using namespace std;

class emp{
    public:
    void empinfo(){
        cout<<"emp name : kamal"<<endl;
        cout<<"emp id: 100"<<endl;


    }
};

class attendance{
    public:
    void attendanceinfo(){
        cout<<"total working days : 26"<<endl;
        cout<<"days present:24"<<endl;
    }
};
class salary : private emp ,private attendance {
    public: 
    void generatesalary(){
        empinfo();
        attendanceinfo();

        cout<<"salary granted successfully";

    }
};

int main(){
    salary s;
    s.generatesalary();
    return 0;
}