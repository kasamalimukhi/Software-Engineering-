#include<iostream>

using namespace std;

class Tour
{
	public:
		
	char choice;
	string name,user,pass,username,password;
	
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
	void display()
	{
	cout<<endl<<"\n do you want to register ?['y/n'] :";
    cin>>choice;
     
    if(choice == 'y'){
    	cout<<"\n=================================================\n"<<endl;
    	cout<<"----------registration process---------- \n";
    	
    	cout<<"enter your name : ";
		cin>>name;
		cout<<"enter your username mail id : ";
		cin>>user;
		cout<<"enter your password : ";
		cin>>pass;
		
		cout<<"\nregistration successful...\n";
	    cout<<"\n============================================\n";
    	cout<<"\n-------------login process--------------\n";
		cout<<"enter username :";
		cin>>username;
		cout<<"enter password :";
		cin>>password;
		
		if(user==username && pass==password)
		  {
		  	cout<<"\n access available";
		  }
		  else
		  {
		  	cout<<"\n access denied username/password wrong !!!\n";
		  }
	}
	else{
		cout<<"thank you ";
	}
	}
	
};


int main()
{
  Tour obj1;	
  obj1.input();
  obj1.display();

return 0;	
}
