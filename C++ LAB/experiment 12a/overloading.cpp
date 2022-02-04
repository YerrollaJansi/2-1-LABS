#include<iostream>
using namespace std;
int mul(int x,int y){
    cout<<"int mul:"<<x*y<<endl;
    return 0;
}
float mul(float a,float b){
    cout<<"float mul:"<<a*b<<endl;
    return 0;
    }
int mul(int x,int y,int z){
    cout<<"int mul3:"<<x*y*z<<endl;
    return 0;
 }
double mul(int a,double b){
    cout<<"double mul:"<<a*b<<endl;
    return 0;
  }
int main(){
    mul(10,20);
    mul(23.5f,24.5f);
    mul(20,30,40);
    mul(20.5,30.45);
  
}



