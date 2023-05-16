#include<iostream>

using namespace std;

class Tour
{
	public:
	
	void input(){
	
	cout<<"-----------welcome to tops tour and travels------------\n";
	cout<<"1.ahemdabad "<<endl ;
	cout<<"2.gandhinagar "<<endl ;
	cout<<"3.mahesana "<<endl ;
	cout<<"4.vadnagar "<<endl ;
    cout<<"5.visnagar "<<endl ;
    cout<<"6.kheralu "<<endl ;
    cout<<"7.baroda "<<endl ;
    cout<<"8.kochi "<<endl ;
    cout<<"9.sabarkantha "<<endl ;
    cout<<"10.rajkot \n" ;
	
	}
	
};

class Regstn
{
    public:
    string name,username,password;
    	
    	
    	void input()
    	{
    		cout<<"\n=================================================\n"<<endl;
    	    cout<<"----------registration process---------- \n";
    		
    		cout<<"enter your name :";
    		cin>>name;
    		cout<<"enter your username/email :";
    		cin>>username;
    		cout<<"enter your password :";
    		cin>>password;
		}
		void display()
		{
			cout<<endl<<"Registration Success ...."<<endl;
			cout<<"================================================================"<<endl<<endl;
			cout<<"-------------Login Process--------------"<<endl;
		}

	
};

class Login
{
	public:
		string username,password;
		
		void input()
		{
			cout<<"enter your username:";
    		cin>>username;
    		cout<<"enter your password :";
    		cin>>password;
		}

};

int main()
{
	Tour objt;
	objt.input();
	
	char choice;
	
	cout<<endl<<"\n do you want to register ?['y/n'] :";
    cin>>choice;
    
	if(choice == 'y'){
    	
    Regstn objr;
	objr.input();
	objr.display();
	
	Login objl;
	objl.input();
	
	if( objr.username==objl.username ||objr.password==objl.password )
			{
				cout<<"access available.";
			}
			else
			{
				cout<<"access denied username/password will be wrong...";
			}

	}
	else{
		cout<<endl<<"Thank you";
	}
	
	
	return 0;
}



