#include <iostream>
using namespace std;

class student{
    private:
    int *age;
    public:
    student(int a){
        age =  new int;
        *age = a;
        cout<<"Memory allocation"<<endl;

    }
    void display(){
        cout<<"Age is:"<<*age<<endl;

    }
    ~student(){
        delete age;
        cout<<"memeory released"<<endl;

    }};
    int main(){
        student s1(20);
        s1.display();
        return 0;

    }
