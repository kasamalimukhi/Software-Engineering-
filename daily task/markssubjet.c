#include<stdio.h>
main()
{
	int marks;
	printf("enter your marks of your subject :");
	scanf("%d",&marks);
	
	if (marks>=90 && marks<=100)
	{
		printf(" your grade is a+");
	}
	else if(marks>=75 && marks<=90)
	{
		printf("your grade is a");
	}
	else if(marks>=60 && marks<=75)
	{
		printf("your grade is b");
	}
	else if(marks>=33 && marks<=60)
	{
		printf("your grade is c");
	}
	else if(marks<33){
		printf("you are fail");
	}
	else{
		printf("invalide input");
	}
}
