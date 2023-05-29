#include<iostream>
using namespace std;

template <typename T>
T Swap(T &a, T &b)
{
	T Temp;
	Temp = a;
	a = b;
	b = Temp;
}
int main()
{
	int A=12,B=56;
	
	cout<<"Before passing data to function Tempalte"<<endl;
	cout<<"A = "<<A<<"\nB = "<<B;
	
	Swap(A,B);
	
	cout<<"\nAfter passing data to function Tempalte"<<endl;
	cout<<"A = "<<A<<"\nB ="<<B;
}
