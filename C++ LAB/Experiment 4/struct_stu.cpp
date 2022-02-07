#include<iostream>
#include<string>
using namespace std;

struct student{
      int r_no;
      string name;
      string department;
      int marks;
     }s;
     
int main(){
    
      cout<<"enter details of student:"<<endl;
      cout<<"enter rollno,name,department,marks of student:"<<endl;
      cin>>s.r_no>>s.name>>s.department>>s.marks;
      cout<<"student rollno is:"<<s.r_no<<endl;
      cout<<"student name is:"<<s.name<<endl;
      cout<<"student department is :"<<s.department<<endl;
      cout<<"student marks is:"<<s.marks<<endl; 
      
     return 0;
     
   }
