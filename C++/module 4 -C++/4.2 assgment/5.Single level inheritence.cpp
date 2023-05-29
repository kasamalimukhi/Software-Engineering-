/* Assume a class cricketer is declared. Declare a derived class batsman from  cricketer. 
Data member of batsman. Total runs, Average runs and best  performance. 
Member functions input data, calculate average runs, Display data (Single Inheritance)*/
 
#include<iostream>n
#include<string.h>
using namespace std;

class Cricketer
{
       public:
	     char team1[30]; char team2[30];
		 int ch=0,t1=0,t2=0, t1score=0,t2score=0,i,avgt1,avgt2;
		 void display()
		 {
		 	cout<<"-------------Welcome to cricket tournament-----------";
		 	cout<<endl<<"     Tournament info\n Total over :20\n Tournament timing :8:00 am to 12:00 pm";
		 	cout<<endl<<"First team name :";
		 	gets(team1);
		 	cout<<endl<<"Second team name :";
		 	gets(team2);
		 	for(i=1;i<=3;i++)
		 	{
		 		cout<<"Day ("<<i<<")";
		 		cout<<endl<<"Who got to bat first";
		 		here:
		 		cout<<endl<<"press 1 for team "<<team1<<" and"<<"2 for team "<<team2;
		 		cin>>ch;
		 		if(ch==1)
		 		{
		 			T:
		 			cout<<endl<<"Total Run scored by "<<team1<<"= : ";
		 			cin>>t1;
		 			if(t1<=0 || t1>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto T;
					}
					t1score+=t1;
					
					t:
		 			cout<<endl<<"Total Run scored by "<<team2<<"= : ";
		 			cin>>t2;
		 			if(t2<=0 || t2>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto t;
					}
					t2score+=t2;
	
				}
				else if(ch==2)
				{
					A:
		 			cout<<endl<<"Total Run scored by "<<team2<<"= : ";
		 			cin>>t2;
		 			if(t2<=0 || t2>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto A;
					}
					t2score+=t2;
					
					a:
		 			cout<<endl<<"Total Run scored by "<<team1<<"= : ";
		 			cin>>t1;
		 			if(t1<=0 || t1>=300)
		 			{
		 				cout<<"These scores are not practicle. Try again";
		 				goto a;
					}
					t1score+=t1;
				}
		 		else 
				{
		 		    cout<<"invalid input please try again";
					goto here;	
				}
		 			
			}
		 	avgt1 =t1score/3;
			avgt2= t2score/3;    
		 	   
			}	
			
};
class Batsman :public Cricketer
{
	public:
		void total_run()
		{
			cout<<endl<<"Total runs scored by team "<<Cricketer::team1<<" : "<<Cricketer::t1score;
			cout<<endl<<"Total runs scored by team "<<Cricketer::team2<<" : "<<Cricketer::t2score;
		}
		void average_runs()
		{
			cout<<endl<<"Total runs scored by team "<<Cricketer::team1<<" : "<<Cricketer::avgt1;
	    	cout<<endl<<"Total runs scored by team "<<Cricketer::team2<<" : "<<Cricketer::avgt2;
		}
};
int main()
{
	Batsman obj1;
	
	obj1.display();
	cout<<endl<<"-----------Match Results----------------------";
	obj1.total_run();
	obj1.average_runs();
}
