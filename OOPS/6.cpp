//destuctor concept
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

        ~Student(){
            cout<<"Hi, I delete everything\n"; //syntax for static allocated memory
            delete cgpaPtr; //delete keyword is used for deallocating dynamically allocated memory
        }//issue of memory leak is solved by destructor

        
        void getInfo(){
            cout<<"name: "<<name<<endl;
            cout<<"cgpa: "<<*cgpaPtr<<endl;
        }

};

int main(){

    Student s1("Vinit Singh", 7.5);
    s1.getInfo();


    return 0;
}