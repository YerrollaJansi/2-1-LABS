#include<iostream>
#include<string>
using namespace std;

class A{
      int x=6;
      public:
      virtual void display()=0;
  
   };
class B:public A{
       int y=5;
       public:
       void display(){
       cout<<"Derived class:value of variable "<<y<<endl;
       }
     };
 int main(){
   A *a;
   B b;
   a=&b;
   a->display();
   return 0;
   
   }          
