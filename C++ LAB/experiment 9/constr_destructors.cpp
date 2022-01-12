#include<iostream>
using namespace std;

class Test{
     public:
         int a,b;
        Test(){
           a=10;
           b=30;
          }
        ~Test(){}
   };
 
int main(){
     Test t;
     cout<<"sum is:"<<t.a+t.b<<endl;
     return 0;
     
  }
     
         
