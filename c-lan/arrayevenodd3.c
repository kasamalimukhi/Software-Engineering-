#include<stdio.h>
main(){
	
	int x[100],i,n,even=0,odd=0;
	printf("\n enter your limite: ");
	scanf("\n%d",&n);
	
	printf("\n enter value: ");
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		if(x[i]%2==0){
			printf("\n%d is a even",x[i]);
			even++;
		}else{
			printf("\n%d is a odd",x[i]);
			odd++;
		}	
	}
	printf("\ntotal even is %d",even);
    printf("\ntotal odd is %d",odd);	
}
