#include <iostream>
using namespace std;

class A1{
         int a;
         public:
             A1(){
             a = 10;
             }
             void show_a1(){
                 cout<< "Inside the  parent class A1 show_a1 method!" << endl;
                 cout<< "value of a is " << a << endl;
          }
};
class A2:public A1{
                     int b;
                     public:
                        A2(){
                           b = 100;
                         }
                          void show_a2(){
                              cout<< "Inside the child_class A2 show_a2 method!" << endl;
                              cout<< "value of b is " << b << endl;
                            }
};
class A3:public A2{
              int c;
              public:
                   A3(){
                      c = 1000;
                   }
                     void show_a3(){
                       cout<< "Inside the Child_Class A3 show_a3 method!" << endl;
                       cout<< "value of c is " << c << endl; 
                     }                              
};
int main()
{
     A3 obj;
     obj.show_a1();
     obj.show_a2();
     obj.show_a3();
     return 0;
}

