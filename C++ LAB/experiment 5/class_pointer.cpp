#include<iostream>
#include<string>
using namespace std;

class employee{
       public:
         string name;
         int salary;
         int e_id;
         void read();
         void display();
         
     };
     
int main(){
     employee e1;
     employee *ptr=&e1;
     ptr->read();                        //(*ptr).read();              
     ptr->display();                     // (*ptr).display();           
    
     return 0;
     }
     
void employee :: read(){
     cout<<"enter name,salary,eid"<<endl;
     cin>>name>>salary>>e_id;
     }
void employee :: display(){
     cout<<"employee details are:"<<endl;
     cout<<"emp_name:"<<name<<endl<<"emp_sal:"<<salary<<endl<<"emp_id:"<<e_id<<endl;
     }
     
         

