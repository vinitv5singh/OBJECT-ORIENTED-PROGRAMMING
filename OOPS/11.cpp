//virtual function

#include <bits/stdc++.h>
using namespace std;
class Parent{
    public:
        getInfo(){
            cout<<"parent class\n";

        }

        virtual void hello(){
            cout<<"hello from\n";
        }
};

class Child : public Parent{
    public:
        getInfo(){
            cout<<"child class\n";
        }

        void hello(){
            cout<<"hello from child\n";
        }
};

int main(){
    Child c1;
    c1.hello();
    return 0;
}