//patterns:

#include<stdio.h>
int main()
{
  int i,j,k=1;
  
  for(i=0;i<=4;i++)
  {
  	printf("\n");
    for(j=0;j<=i;j++)
    {
      printf("%d\t",k);
      k++;
    }
  }
  
  return 0;
}
