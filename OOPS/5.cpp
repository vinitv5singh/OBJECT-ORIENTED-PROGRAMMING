#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    //dynamically allocated memory
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this->name=name;
            cgpaPtr= new double;
            *cgpaPtr=cgpa;
        }

        Student(Student &obj){
            this->name=obj.name;
            this->cgpaPtr=obj.cgpaPtr;
        }

        
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;
        }

};

int main(){

    Student s1("Vinit Singh", 7.5);
    s1.getInfo();
    Student s2(s1);
    //s2.getInfo();
    *(s2.cgpaPtr)=9.2;
    s2.getInfo();

    return 0;
}