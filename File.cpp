#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
	public:
		string name;
		string email;
		int roll;
		void create();
};
void student::create(){
	ofstream fout("stud.txt",ios::app);
	int ch;
	do{
		cout<<"Enter Roll No :"<<endl;
		cin>>roll;
		cout<<"Enter name :"<<endl;
		cin>>ws;
		getline(cin,name);
		cout<<"Enter Email :"<<endl;
		cin>>ws;
		getline(cin,email);
		fout<<roll<<" "<<name<<" "<<email;
		cout<<"Enter ch"<<endl;
		cin>>ch;
		
	}while(ch==1);
	fout.close();
}
int main()
{
	student s;
	s.create();
}
