/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the marks 
obtained in two subjects and class result contains the total marks obtained in 
the test. The class result can inherit the details of the marks obtained in the 
test and roll number of students. (Multilevel Inheritance)*/
 
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		//Print the value
		int roll;
		void display()
		{
			cout<<"-------- Date of Batch result----------";
			cout<<endl<<endl<<"Enter Roll number :";
			cin>>roll;
		}
};

class test
{
	public:
		int maths,science;
		void display1()
		{
			cout<<"Each subject is of 100 marks "<<endl;
			cout<<"marks obtained in maths : ";
			cin>>maths;
			cout<<"marks obtained in science : ";
			cin>>science;
		}
};
class Result : public Student,public test  //multi level inheritance 
{
	public:
		void display2()
		{
			cout<<endl<<"--------------Data inserted--------------";
			cout<<endl<<"Roll number of student :"<<Student ::roll;
			cout<<endl<<"Total marks obtained :"<<test::maths+test::science;
		}
};
int main()
{
   Result obj;//child class obj
   obj.display();//using obj calling function 
   obj.display1();
   obj.display2();	
}
