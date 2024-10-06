#include <iostream>
#include <string>
using namespace std;

class Teacher{

    private:
        double salary;
    //properties or attributes
    public:
        string name;
        string dept;
        string subject;


    //parameterized
    Teacher(string name, string dept, string subject, double salary){
        this->name=name;// left side name is property of object and right side of name is parameter of constructor
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){     //pass by reference
        cout<<"I am custom copy constructor...\n";
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;

    }


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
    
    //t1.getInfo();

    Teacher t2(t1); //custom copy constructor invoked 
    t2.getInfo();


    return 0;
}