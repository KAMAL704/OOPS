
// 1.Default construction


#include <iostream>
using namespace std;


class student{
    private:
    string name;
    int age;

    public:
    student(){
        name = "kamal";
        age = 19;
    }
    
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        
    }
    ~student(){}


};
int main(){
    student s;
    s.display();
    return 0;

}
