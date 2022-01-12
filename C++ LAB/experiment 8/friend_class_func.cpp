#include<iostream>
#include<string>
#define PI 3.14
using namespace std;

class A{
      int x=10;
      friend class B;
};
class B{
       public:
         void display(A &a){
           cout<<"value of x:"<<a.x;
         }
};
class circle{
          int radius;
      public:
      circle():radius(5){}
      friend int print_area(circle);   
 };     
                  
int print_area(circle c){
       int area;
       area=PI*c.radius*c.radius;
       return area;
       }

int main(){
    circle c;
    cout<<"area of circle:"<<print_area(c)<<endl;
    A a;
    B b;
    b.display(a);
    return 0;
    
}   

