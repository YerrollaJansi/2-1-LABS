#include<iostream>
#include<exception>
using namespace std;
class Exception1{
        public:
             int a,b;
             void read(){
             cout<<"enter the values of a and b"<<endl;
             cin>>a>>b;
             }
             void calculate(){
                 try{
                     if(b>0){
                         cout<<"the value of a/b= "<<a/b<<endl;
                      }
                     else if(b==0){
                         throw b;
                      }
                     else
                         throw b;
                 }
                 catch(int x){
                     if(b==0){
                         cout<<"divide by zero exception caught"<<endl;
                         }
                     else
                         cout<<"value of b should be positive"<<endl;
                 }
                 catch(...){
                      if(b==0){
                         cout<<"divide by zero exception caught"<<endl;
                         }
                     else
                         cout<<"value of b should be positive"<<endl;
                   }
              }
         };
int main(){
    Exception1 obj;
    obj.read();
    obj.calculate();
    return 0;
  }              
              
              
