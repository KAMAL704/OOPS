

// using a pointer


#include<iostream>
using namespace std;

class student{
    public:
    string name;

    void display(){
        cout<<"name is:"<<name<<endl;

}
};

int main(){
    student s1;
    student *ptr = &s1;
    ptr->name = "kamal";
    ptr->display();
    
   
    return 0;
}