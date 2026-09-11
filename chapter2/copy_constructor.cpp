

#include <iostream>
using namespace std;


class student{
    private:
    // string name;
    int age;

    public:
    student(int a){
        // name = "kamal";
        age = a;


        cout<<"parametrised constr."<<endl;

    }
    student(student & obj){
        age = obj.age;
        cout<<"copy const."<<endl;


    }
    
    void display(){
        // cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        
    }

    // ~student(){}

};
int main(){
    student s1(20);
    student s2 = s1;
    cout<<"object s1"<<endl;
    
    s1.display();
    cout<<"object s2"<<endl;
    s2.display();
    return 0;

}
