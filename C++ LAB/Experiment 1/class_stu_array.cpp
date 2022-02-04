#include<iostream>
#include<string>
using namespace std;
class student{
     public:
       string s_name;
       int r_no;
       char grade[5];
       void read();
       void display();
       
       }s[3];
       
int main(){
  int i;
  for(i=0;i<3;i++){
  s[i].read();
  }
  for(i=0;i<3;i++){
  s[i].display();
  }
  
  return 0;
  }
  
void student :: read(){
      
         cout<<"enter the name,rollno.,grade ofstudent:"<<endl;
         cin>>s_name>>r_no>>grade;
      }
      
void student :: display(){
        cout<<"details of student:"<<endl;
        cout<<"student name is:"<<s_name<<endl<<"student rollno is:"<<r_no<<endl<<"grade is:"<<grade<<endl;
        
   }

       
