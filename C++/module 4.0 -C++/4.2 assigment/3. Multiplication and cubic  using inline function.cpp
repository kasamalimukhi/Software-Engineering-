#include<iostream>
using namespace std;

class fun//class
{
	public:
		inline float Mul(float x,float y)//inline function 
		{
			return (x*y);
		}
		inline float Cube(float x)//inline function 
		{
			return (x*x*x);
		}
};
int main()
{
	fun obj;// class obj 
	float a,b;//float variables
	cout<<"Enter two values"<<endl; //taking input
	cin>>a>>b;
	
	cout<<"MULTIPLICATION VALUE IS :\n"<<obj.Mul(a,b); //calling function using obj
	
	cout<<"\n-------------------------------\n";
	
	cout<<"CUBIC VALUE IS :\n"<<obj.Cube(a); //calling function using obj
	
	
}
