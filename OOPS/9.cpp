//FUNCTION OVERLOADING IS ALSO AN EXAMPLE OF COMPILE TIME POLYMORPHISM

#include <iostream>
#include <string>
using namespace std;

class Print{
    public:
        void show(int x){
            cout<<"int: "<<x<<endl;
        }

        void show(char ch){
            cout<<"char: "<<ch<<endl;
        }
};

int main(){
    Print p1;
    p1.show('v');

    return 0;
}