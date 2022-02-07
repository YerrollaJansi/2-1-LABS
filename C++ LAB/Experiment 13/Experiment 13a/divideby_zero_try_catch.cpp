#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;
    try{
        if(b>0||b<0){
            cout<<"a/b= "<<a/b<<endl;
          }
        else
            throw b;
    }
    catch(int x){
        cout<<"exception caught"<<endl;
        cout<<"value of b shouldnot be zero"<<endl;
      }
  return 0;
}

