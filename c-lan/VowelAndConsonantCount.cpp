#include<stdio.h>

int main()
{
	//declartion of strings
	char str1[20];
	int i,c_count=0,v_count=0;
	
	//string input
	printf("enter string :");
	gets(str1);
	
	//to count length of string
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U' || str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
		{
			v_count++;
		}
		else
		{
			c_count++;
		}
	}
	printf("consonant count :%d\n",c_count);
    printf("vowel count :%d\n",v_count);
	
	
	return 0;
	
}
