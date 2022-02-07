#include<iostream>
#include<fstream>
using namespace std;

class Unary{
    private:
        int num;
    public:
      Unary():num(10){}
        void operator ++(){
            num = num+2;
         }
        void Print() {
            cout<<"The Count is: "<<num;
          }
};

int main(){
   Unary t;
    ++t;           
    t.Print();
   return 0;
}
