#include<stdio.h>

main()
{
	int result[5],i,total,percentage;
	printf("science:\n");
	printf("maths:\n");
	printf("english:\n");
	printf("hindi:\n");
	printf("socialscience:\n");
	for(i=0;i<5;i++)
	{   
		scanf("%d",&result[i]);
	}
	printf("the result values are : ");
	for(i=0;i<5;i++)
	{
		printf("%d \t",result[i]);
		
	}
	total=result[0]+result[1]+result[2]+result[3]+result[4];
	printf("\n total is : %d",total);
	percentage=total/5;
	printf("\n percentage is: %d",percentage) ;
	if(percentage>=75)
	{
		printf("\n Distinction");
	}
	else if(percentage>=60 && percentage<=75)
	{
		printf("\n First Class");
	}
	else if(percentage>=50 && percentage<=60)
	{
		printf("\n Second Class");
	}
	else if(percentage>=45 && percentage<=50)
	{
		printf("\n Pass Class");
	}
	else if(percentage<=35)
	{
		printf("\n Fail");
	}
	
	
}
