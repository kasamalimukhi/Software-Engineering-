// WAP to print factorial of given number:

#include<stdio.h>  
main()    
{    
 int i,fact=1,number; 
    
 printf("Enter a number: ");    
 scanf("%d",&number);  
    
 for(i=1;i<=number;i++){    
      fact=fact*i;    
 }    
  printf("Factorial of %d is: %d",number,fact);     
}   
