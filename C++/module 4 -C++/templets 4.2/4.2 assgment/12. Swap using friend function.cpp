//Write a program to swap the two numbers using friend function without using third variable
#include<iostream>
using namespace std;

class Swap
{
	public:
	int a,b;
	
	public:
		friend void swap(Swap obj);
		
};
void swap(Swap obj)
{
//	int a,b;
//	obj.a=25;
//	obj.b=52;
obj.a=23;
obj.b=45;
	obj.a=obj.a+obj.b; //swap the number
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;

	cout<<"Swapping numbers \n"<<"a :"<<obj.a<<endl<<"b :"<<obj.b;
}
int main()
{
	Swap ob;
	swap(ob);
	
	return 0;
}


