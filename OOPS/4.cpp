#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    //statically allocated memory
        string name;
        double cgpa;

        Student(string name, double cgpa){
            this->name=name;
            this->cgpa=cgpa;
        }

        Student(Student &obj){
            this->name=obj.name;
            this->cgpa=obj.cgpa;
        }
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<cgpa<<endl;
        }

};

int main(){

    Student s1("Vinit Singh", 7.5);
    //s1.getInfo();
    Student s2(s1);
    s2.getInfo();

    return 0;
}