//  parameterised construction




#include <iostream>
using namespace std;


class student{
    private:
    string name;
    int age;

    public:
    student(string k, int a){
        name = k;
        age = a;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }


};
int main(){
    student s("kamal",19);
    s.display();
    return 0;

}
