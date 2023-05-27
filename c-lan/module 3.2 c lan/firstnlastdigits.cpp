/*Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5:*/
#include<stdio.h>
int main()
{
int num,sum=0,firstDigit,lastDigit;

printf("Enter any number to find sum of first and last digit:");
scanf("%d",&num);

lastDigit=num%10;

firstDigit=num;

while(num>=10)
{
num=num/10;
}
firstDigit=num;

sum=firstDigit+lastDigit;
printf("Sum of first & last digit=%d",sum);


return 0;
}
