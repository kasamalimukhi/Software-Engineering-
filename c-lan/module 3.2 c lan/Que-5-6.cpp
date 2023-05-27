//6. Sum of odd numbers WAP to print table up to given numbers:

#include<stdio.h>
int main()
{
int i,n,sum=0;

printf("Enter  limit: ");
scanf("%d", &n);

for(i=1; i<=n;i++);
{
sum+=i;
}
printf("Sum of odd numbers= %d", sum);


return 0;
}
