#include<iostream>
#include<string>
using namespace std;

class A{
      int x=6;
      public:
      virtual int display(){
      return x;
      }
   };
class B:public A{
       int y=5;
       public:
       int display(){
       return y;
       }
     };
 int main(){
   A *a;
   B b;
   a=&b;
   cout<<"value of variable is "<<a->display()<<endl;
   return 0;
   
   }          





