#include<iostream>
using namespace std;

class Addition
{
	float c;
	
	public:
		Addition(float a,float b);
	
};
Addition ::Addition(float a,float b)//constructor with arguments
{
	c=a+b;
	cout<<"Sum of given two numbers :"<<c<<endl;
}
class Subtraction
{
	float c;
	
	public:
		Subtraction(float a,float b);
	
};
Subtraction ::Subtraction(float a,float b)
{
	c=a-b;
	cout<<"Sub of given two numbers :"<<c<<endl;
}
class Multiplication
{
	float c;
	
	public:
		Multiplication(float a,float b);
	
};
Multiplication ::Multiplication(float a,float b)
{
	c=a*b;
	cout<<"Mul of given two numbers :"<<c<<endl;
}
class Division
{
	float c;
	
	public:
		Division(float a,float b);
	
};
Division ::Division(float a,float b)
{
	c=a/b;
	cout<<"Division of given two numbers :"<<c<<endl;
}

int main()
{
	float x,y;
	cout<<"Enter two numbers";
	cin>>x>>y;
	
	Addition add(x, y);//creating an object of constructor
    Subtraction sub(x, y);
    Multiplication mult(x, y);
    Division div(x, y);

}
