//FUNCTION_OVERRIDING
#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
        getInfo(){
            cout<<"parent class\n";
        }
};

class Child : public Parent{
    public:
        getInfo(){
            cout<<"child class\n";
        }
};

int main(){
    Child c1;
    c1.getInfo();
    return 0;
}