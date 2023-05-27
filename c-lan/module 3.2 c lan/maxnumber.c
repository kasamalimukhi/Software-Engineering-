// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6):

#include<stdio.h>
main()
{
	
	int i,a,x,max=0;
	
	printf("Choose Your Value : ");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
	    printf("\nEnter value no.%d : ",i);
	    scanf("%d",&x);
        if(x > max)       
       	{                  
	      	max=x;         
	    }
	}
    printf("\n\nmaximum value is : %d",max); 
}
