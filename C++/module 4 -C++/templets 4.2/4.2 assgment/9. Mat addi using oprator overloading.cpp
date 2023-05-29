// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class Matrix
{
	int a[5],c[5];
	int b[5];
	int i;
	public:
		void accept();
		void display();
		void operator +(Matrix obj);
};

void Matrix :: accept()
{
	cout<<"Enter  array element \n";

	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
}

void Matrix :: display()
{

	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}

	}
	
void Matrix :: operator +(Matrix obj)
{
	for(i=0;i<5;i++)
	{

    	c[i] = a[i]+obj.a[i];
	}
	cout<<endl<<"Addition of two array is :"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<c[i]<<" ";
	}
}
int main()
{
	
    Matrix a1,b1;
    a1.accept();
    b1.accept();
    cout<<endl<<"first array is:"<<endl;
    a1.display();
    cout<<endl<<"second array is :"<<endl;
    b1.display();
    a1+b1;

	return 0;
}
