//multilevel Inheritance

#include<iostream>
using namespace std;

//class 1
class Parent
{
	public:
		// constructor of the base class1
		
		Parent(){
			
		cout<<"this is a parent"<<endl;
		
		}
		
		
};

//class1 inheriting class2

class Child1:public Parent
{
	public:
		
		// constructor of the base class2
		
	Child1()
	{
		cout<<"this is a parent is child1"<<endl;
	}
	
};

//class2 inheriting class3

class Child2:public Child1
{
	public:
		
		// constructor of the derived class
		
	Child2()
	{
		cout<<"this is a parentChild1 is child2"<<endl;
	}
	
};

int main()
{
	// create object of the derived class 
	Child2 obj;
	
	return 0;
}







