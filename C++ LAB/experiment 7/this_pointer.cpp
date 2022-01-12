#include<iostream>
#include<string>
using namespace std;
class student{
    int roll_no;
    string name;
    int marks;
    string grade;
    public:
        student(int roll_no,string name,int marks,string grade){
           this->roll_no=roll_no;
           this->name=name;
           this->marks=marks;
           this->grade=grade;
        }
       void display(){
          cout<<"student rollno is:"<<roll_no<<endl;
          cout<<"student name is:"<<name<<endl;
          cout<<"student marks is:"<<marks<<endl;
          cout<<"student grade is:"<<grade<<endl; 
        }
 };
 
int main(){
     student s1(12,"dharani",75,"A");
     student s2(14,"priya",90,"A+");
     s1.display();
     s2.display();
     
     return 0;
  }
