//constructor overloading is an application of polymorphism
#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;;

        Student(){
            cout<<"non-parameterized constructor\n";
        }

        Student(string name){
            this->name=name;
            cout<<"parameterized\n";
        }
};

int main(){
    Student s1("Vinit Singh");

    return 0;
}
