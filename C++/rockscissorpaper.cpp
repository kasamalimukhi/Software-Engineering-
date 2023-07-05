#include<iostream>
#include <conio.h>
#include<stdlib.h>
#include<ctime>


using namespace std;

class Paper
{
	
	public:
		int i,ch;
	    char choice,name[20];	
	
	void input(){
	
	cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*\n\n";
	cout<<"\t\tName\n";
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	
	cout<<"\nEnter Your Name :";
	cin>>name;
	
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	cout<<"\n\t\tRound\n";
	cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	
	cout<<"\n"<<name<<" How Many Round You Want To Play? :";
	cin>>ch;
	for (i = 1; i <=ch ; i++){
	
	  	
	    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	    cout<<"\n\t\tGame\n"<<endl;
	    cout<<"*--*--*--*--*--*--*--*--*--*--*--*--*"<<endl;
	    cout<<endl<<"Round No : "<<i<<"/"<<ch<<endl;             
	    cout<<endl<<"kasamali score = 0"<<endl;
	    cout<<endl<<"computer score = 0"<<endl;
              
		cout<<endl<<"1) Rock"<<endl;
        cout<<endl<<"2) Paper"<<endl;
		cout<<endl<<"3) Scissor"<<endl;
		
		cout<<"\nselect your choice : ";
		cin>>choice;
			
			switch(choice){
				case '1': cout<<"computer choice is : 2"<<endl;
				        cout<<"computer is win."<<endl;
				        break;
				case '2': cout<<"computer choice is : 2"<<endl;
				        cout<<"draw"<<endl;
				        break;
				case '3': cout<<"computer choice is : 1"<<endl;
				        cout<<"you are win."<<endl;
				        break;
				default :
					cout<<"invalid input...";
		}
       cout << "\nPress any key to continue..." <<endl;
       _getch();	
	    
    }
    }
	
};

int main(){	
	
	Paper objp;
	objp.input();
	

	return 0;
	
}
