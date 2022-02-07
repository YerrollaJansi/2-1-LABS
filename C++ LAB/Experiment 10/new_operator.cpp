#include<iostream>
#include<string>
using namespace std;

int main(){
      int *ptr;
      ptr=new int;
      cout<<"Number of bytes allocated to ptr is "<<sizeof(ptr)<<endl;
      *ptr=50;
      cout<<"value of ptr is:"<<*ptr<<endl;
      return 0;
      
    }
