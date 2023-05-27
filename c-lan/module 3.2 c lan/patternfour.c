//pattern

#include<stdio.h>
#include<conio.h>
int main()
{
int  n, x, y;
printf("Enter the number of rows to show number pattern: ");
scanf("%d",&n);
for(x = 1; x < n; x++)
{
for(y = 1; y <= x; y++)
{
	printf("*",y);
}
printf("\n");
}
for(x = n; x >= 0; x--)
{
for(y = 1; y <= x; y++)
{
printf("*",y);
}

printf("\n");
}
return 0;
}

