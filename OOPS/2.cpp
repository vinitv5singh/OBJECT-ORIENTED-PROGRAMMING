#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties or attributes
    public:
    //non-parameterized
    /*Teacher(){
        dept="Computer Science"; //we have initialised value in constructor
    }*/

    //parameterized
    Teacher(string n, string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
        }

    string name;
    string dept;
    string subject;
    double salary;
    

    public:
  //methods or member function
    void changeDept(string newDept){
        dept=newDept;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};


int main(){
    Teacher t1("Vinit", "Computer Science", "C++", 25000);   //constructor call whenever an object is called
    
    t1.getInfo();

    return 0;
}