#include<iostream>
using namespace std;

int a=40;        //Global variable

int main(){
    int a=280;             //Local variable
    cout<<"value of global variable a is "<<::a<<endl;
    cout<<"value of local variable a is "<<a<<endl;
    
    return 0;
    }
