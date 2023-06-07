#include<iostream>
using namespace std;

class BankAccount
{
	public:
	int bal=20000;//class var
	char name[20]="KASAMALI";
	char type[10]="cureent";
	char acnumber[15]="345678904562";
	int de,with,tod,towith;
	
	public:
		void Bank()//class method 1 to take input from user
		{
			cout<<"-----------Bank Account Details --------------"<<endl;
			cout<<"Name of the depositor : "<<name<<endl;
			cout<<"Account Number : "<<acnumber<<endl;
			cout<<"Account Type :"<<type<<endl;
			cout<<"Balance = "<<bal<<endl;
		}
		int bank()//class method 2 to take input from user
		{
			cout<<"Enter the amount to be deposit"<<endl;
			cin>>de;
			tod=20000+de;
		    cout<<"Remaining balance ="<<tod<<endl;
		    cout<<"Enter the amount to be Withdraw"<<endl;
		    cin>>with;
		    towith=tod-with;
		    cout<<"Remaining balance ="<<towith<<endl;
		    cout<<"Name ="<<name<<endl<<"Balance = "<<bal<<endl;
		}
};
int main()
{   
     BankAccount obj;//obj created
     obj.Bank();//calling the function using object
     obj.bank();
}
