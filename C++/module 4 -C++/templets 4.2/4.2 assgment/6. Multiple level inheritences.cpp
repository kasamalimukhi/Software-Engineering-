#include<iostream>
#include<string.h>
using namespace std;

class person
{
	public:
		char name[20];//class variables 
		int age;
		void input()//class method for talking input from user
		{
			cout<<"--------------presonal Details-------";
			cout<<endl<<"Enter name :";
			gets(name);
			cout<<endl<<"Age :";
			cin>>age;
		}
};
class student:public person//inheriting from parent class person 
{
	public :
		int percentage;
		
		void per()
		{
			cout<<endl<<"percentage of "<<person::name<<" in % : ";
			cin>>percentage;
		}
};
class teacher :public student//inherting from parent class student
{
	public:
		char teac[20];
		int salary =0;
		
		void sal()
		{
			cout<<endl<<"Name of teacher : ";
			gets(teac);
			cout<<endl<<"Salary of "<<teac<<" : ";
			cin>>salary;
			cout<<endl<<"---------  Data inserted-----------";
			cout<<endl<<"Name :"<<person::name;
			cout<<endl<<"Age :"<<person::age;
			cout<<endl<<"percentage : "<<student::percentage;
			cout<<endl<<"Name of teacher:"<<teac;
			cout<<endl<<"Salary of teacher  :"<<salary;
			
		}
};
int main()
{
	teacher obj;//derived class obj 
	obj.input();//using obj calling function 
	obj.per();
	obj.sal();
}
