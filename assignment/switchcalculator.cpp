#include<stdio.h>
main()
{
	int a,b,c;
	char num;
	printf("enter * this is mul \n");
	printf("enter + this is add \n");
	printf("enter - this is sub \n");
	printf("enter / this is divide \n");
	printf("enter % this is modulo \n");
	
	printf("enter your first number:");
	scanf("%d",&a);
	printf("enter your choice:");
	scanf("%s",&num);
	printf("enter your second number:");
	scanf("%d",&b);
    
	
	switch(num)
	{
		case '*':
			c=a*b;
			printf("your mul is = %d",c);
			break;
        case '+':
			c=a+b;
			printf("your add is = %d",c);
			break;
		case '-':
			c=a-b;
			printf("your sub is = %d",c);
			break;
		case '/':
			c=a/b;
			printf("your divide is = %d",c);
			break;
		case '%':
			c=a%b;
			printf("your modula is = %d",c);
			break;
		default :
			printf("your input is invalide");
			break;
    }
}
