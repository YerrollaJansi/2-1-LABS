#include<iostream>
using namespace std;
class A{
    public:
        void display(){
            cout<<"Base function is displayed"<<endl;
            }
  };
class B:public A{
    public:
        void display(){
            cout<<"derived function is displayed"<<endl;
           }
};
int main(){
    B b;
    b.display();
    return 0;
    
 }

