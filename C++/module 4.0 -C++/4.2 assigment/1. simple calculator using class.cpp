#include<iostream>
using namespace std;

class calculator
{
	float a,b;//class variables
	public:
		
		void input()//method for taking input
		{
			cout<<"Enter two numbers :"<<endl;
			cin>>a>>b;
		}
		
		float Sum()//method for sum
		{
			return a+b;
		}
	    float Sub()//method for sub
		{
			return a-b;
		}
		float Mul()//method for mul
		{
			return a*b;
		}
		float Div()//method for div
		{
			return a/b;
		}
	
};
int main()
{
	int ch;//variable for switch case choice
	
	calculator obj;//obj of class created
	
	    cout<<"Enter 1 to Addition\n";
	    cout<<"Enter 2 to Substraction\n";
	    cout<<"Enter 3 to Multiplication\n";
      	cout<<"Enter 4 to Division\n";
	    cout<<"Enter 0 to Exit\n";
	    
	do
	{
		
		cout<<"\nEnter your chioce :";// to take choice input from user
		cin>>ch;
		switch(ch)//switch case
		{
			case 1:
				obj.input();
				cout<<"Result = "<<obj.Sum()<<endl;
				break;
			case 2:
				obj.input();
				cout<<"Result = "<<obj.Sub()<<endl;
				break;
			case 3:
				obj.input();
				cout<<"Result = "<<obj.Mul()<<endl;
				break;
			case 4:
				obj.input();
				cout<<"Result = "<<obj.Div()<<endl;
				break;
//			default:
//				cout<<"no match data...";
//				break;		
		}
		
	}while(ch >= 1 && ch <= 4);
	
	
	return 0;
}
