//single lavel Inheritance

#include<iostream>
using namespace std;

//parent(base) class

class Parent
{
	public:
		// constructor of the base class 
		
		Parent(){
			
		cout<<"this is a parent"<<endl;
		
		}
		
		
};

//child(derived) class

class Child:public Parent
{
	public:
		
	Child(){
		cout<<"this is a child";
	}	
};

int main()
{
	// create object of the derived class
	
    Child c; // constructor of base class and
            // derived class will be called
    
	return 0;
		
}
