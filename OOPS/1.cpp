#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties or attributes
    public:

    Teacher(){
        cout<<"Hi, I am constructor\n";
    }

    string name;
    string dept;
    string subject;
    private:
    double salary; //data hiding

    public:
  //methods or member function
    void changeDept(string newDept){
        dept=newDept;
    }

    //setter
    void setSalary(double s){
        salary=s;
    }


    //getter
    double getSalary(){
        return salary;
    }
};


int main(){
    Teacher t1;   //constructor call whenever an object is called
    Teacher t2;
    t1.name="Vinit";
    t1.subject="C++";
    t1.dept="Computer Science";
    t1.setSalary(25000);
    

    cout<<"The name of the teacher is : "<<t1.name<<endl;
    cout<<"The subject of the teacher is : "<<t1.subject<<endl;
    cout<<"The department of the teacher is : "<<t1.dept<<endl;
    cout<<"The salary of the teacher is : "<<t1.getSalary()<<endl;
    
    return 0;
}
