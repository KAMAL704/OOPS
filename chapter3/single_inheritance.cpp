
#include <iostream>
using namespace std;


class emp{
    protected:
    string name;
    int empid;

    public:
    void getemp(){
        cout<<"enter name"<<endl;
        cin>> name;
        cout<<"enter empid"<<endl;
        cin>>empid;
    }
    
    void displayemp(){
        cout<<"Name: "<<name<<endl;
        cout<<"EmpID: "<<empid<<endl;
        
    }};

   class manager:public emp
   {
    private:
    string department;
    public:
    void getmanager(){
        cout<<"enter department"<<endl;
        cin>>department;

    }

        void displaymanager(){
            displayemp();
            cout<<"DEPARTment is:"<<department;
            

    }
   };



int main(){
   manager m;
   m.getemp();
   m.getmanager();
   m.displaymanager();

    return 0;

}
