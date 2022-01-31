#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char input[30];
    
    ifstream fin;
    ofstream fout;
    fout.open("file1.txt",ios::out);
                                                                                                //fout<<"Name:Jansi"<<endl;
    cin.getline(input,30);
    fout<<input<<endl;
    cout<<input<<endl;                                               //cout<<"Name:Jansi"<<endl;    
    fout.close();
    fin.open("file1.txt");
    fout.open("file1.txt",ios::app);
    if(fin.is_open()){
       cin.getline(input,30);
       fout<<input<<endl;
       cout<<input<<endl;                                                 //fout<<"department:IT A"
     }                                                                      // cout<<"department:IT A"<<endl;
                                                                            
     fout.close();
     fin.close();
    return 0;
  }
    
