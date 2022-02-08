#include<iostream> 
using namespace std; 
class Complex{ 
   private: 
      int real, imag; 
   public: 
       Complex(int r = 0, int i =0){
           real = r;   
           imag = i;
         } 
       Complex operator - (Complex const &obj1){ 
           Complex obj2; 
           obj2.real = real - obj1.real; 
           obj2.imag = imag - obj1.imag; 
        return obj2; 
       } 
       void print() { 
          if(imag>=0)
             cout << real <<" + "<< imag <<"i"<< endl; 
          else
              cout << real << " + "<<"("<< imag <<")i"<<endl;  
         } 
     }; 
int main(){ 
   Complex comp1(15, -2), comp2(5, 10);
   cout<<"The two comple numbers are:"<<endl;
   comp1.print();
   comp2.print();
   cout<<"The result of the subtraction is: "; 
   Complex comp3 = comp1 - comp2; 
   comp3.print(); 
}
