
// accessing protected member

#include <iostream>
using namespace std;
class employee{
    protected:
    int salary;
    public:
    
    void setdisplay(int s){
        salary = s;

    }
};

class manager : public employee{
    public:
    void display(){
        cout<<"manager salary :"<<salary<<endl;
    }
};

int main(){
    manager m;
    m.setdisplay(50000);
    m.display();
    return 0;
}
