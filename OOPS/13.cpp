//static keyword
#include <iostream>
#include<string>
using namespace std;

void fun(){
    //int x=0;
    static int x=0; //init statement - 1 run, x i s not getting destroyed
    cout<<"x: "<<x<<endl;
    x++;
}

int main(){
    fun();
    fun();
    fun();

    return 0;
}