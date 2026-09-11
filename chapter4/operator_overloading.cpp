#include <iostream>
using namespace std;

class calculator{
    private:
    int value;
    public:
    calculator(int v = 0)
    {
        value = v;

    }
    int add(int a, int b){
        return(a+b);
    }
    double add(double a,double b){
        return(a+b);
    }


calculator operator+(calculator obj){
    calculator temp;
    temp.value = value + obj.value;
    return temp;

}
void display(){
    cout<<"value = "<<value<<endl;
}};

int main(){
    calculator c1(10),c2(20),c3(30);
    cout<<"sum of integers"<<c1.add(10,20)<<endl;
    cout<<"sum of doubles"<<c1.add(10.5,20.5)<<endl;
    c3 = c1+c2;
    cout<<"After operator overloading"<<endl;
    c3.display();
    return 0;

}