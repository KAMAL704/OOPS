
// using a object public

#include <iostream>
using namespace std;

class rectangle{
public:

int length;
int breadth;
void area(){

    cout<<"Area is : "<<length*breadth<<endl;
}
};

int main(){
    rectangle r;
    r.length = 12;
    r.breadth = 5;
    r.area();

    return 0;

}

