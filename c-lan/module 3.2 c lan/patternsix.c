//patterns

#include<stdio.h>
#include<conio.h>

int main()
{
int n, x, y;

printf("Enter number of rows to show character pattern: ");
scanf("%d",&n);

for(x = 1; x <= n; x++)
{
for(y = 1; y <= x; y++)
{
printf("%c",'A' + y -1);
}
printf("\n");
}

return 0;
}
