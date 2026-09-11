

// accessing private member


#include <iostream>
using namespace std;

class student {
    private:

    string name;
    int age;

public:
void display(){
    cin>>name;
    cin>>age;
    cout<<"Name is "<<name<<endl;
    cout<<"age is "<<age<<endl;
    

}
};


int main(){ 

    student S1;
 
    
    S1.display(); 

    return 0;
}