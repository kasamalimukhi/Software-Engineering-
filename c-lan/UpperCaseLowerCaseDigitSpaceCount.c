#include<stdio.h>

int main()
{
	//declartion of strings
	char str1[20];
	int i,uppercase=0,lowercase=0,digits=0,whitespaces=0;
	
	//string input
	printf("enter string :");
	gets(str1);

	
	//to count length of string
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i] >= 'A' && str1[i] <= 'Z')   
  		{
  			uppercase++;  	
 		}
 		else if(str1[i] >= 'a' && str1[i] <= 'z')
 		{
 			lowercase++;
		}
  		else if (str1[i] >= '0' && str1[i] <= '9')
  		{
  			digits++;  	
  		}
  		else if (str1[i] ==' ')
  		{
  			whitespaces++;  	
  		}
		    
  		
	}
	printf("lowercase count :%d\n",lowercase);    
        printf("uppercase count :%d\n",uppercase);    
        printf("digits count :%d\n",digits);          
        printf("whitespaces count :%d\n",whitespaces);
	
	return 0;
}
