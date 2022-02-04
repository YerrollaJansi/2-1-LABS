#include<iostream>
#include<string>
using namespace std;

class Employee{
      public:
        int emp_no;
        string emp_name;
        int Basic,DA,IT,netsal;
        void read(){
          cout<<"enter employee no,name,basic,da,it:"<<endl;
          cin>>emp_no>>emp_name>>Basic>>DA>>IT; 
        }
        void display(){
        cout<<"details of employee:"<<endl;
        cout<<"emp_no:"<<emp_no<<endl<<"emp_name:"<<emp_name<<endl<<"Basic_sal:"<<
       Basic<<endl<<"DA:"<<DA<<endl<<"IT:"<<IT<<endl;              
        }
        void calculate_netsalary();
    };
  
void Employee :: calculate_netsalary(){
           netsal=(Basic+DA)-IT;
           cout<<"netsalary is:"<<netsal<<endl;
      }

int main(){
     Employee e;
     e.read();
     e.display();
     e.calculate_netsalary();
     return 0;
     }      


