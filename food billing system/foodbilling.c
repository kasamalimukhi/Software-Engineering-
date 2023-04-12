#include<stdio.h>

main()
{
	int code,qty;
	float price,amt,totalamt;
	char addanother,ysno,n,y;
	
	do{
		
	printf("1.pizza   \tprice = 180rs/pcs \n");
	printf("2.burger  \tprice = 100rs/pcs \n");
	printf("3.dosa    \tprice = 120rs/pcs \n");
	printf("4.idli    \tprice = 50rs/pcs \n");
	
	printf("please enter your choice no...:");
	scanf("%d",&code);
	
	switch(code){
		case 1: printf("you have a selected pizza");
		        price=180;
		        break;
	    case 2:printf("you have a selected burger");
	           price=100;
	           break;
	    case 3:printf("you have a selected dosa");
	           price=120;
	           break;
	    case 4:printf("you have a selected idli");
	           price=50;
	           break;
	    default :
		printf("invalide choice");
		break;
	}
	printf("\nenter the quantity:");
	scanf("%d",&qty);
	
	amt = price * qty;
	printf("\nAmount: %.2f \n",amt);
	
	totalamt = totalamt+amt;
	printf("total amount is =%.2f",totalamt);
	
    printf("\nDo you want place more orders ? y & n: ");
    addanother = getche();
    
    if(addanother=='n'){
    	printf("\n");
		
	}
    else{
    printf("\n\n--------Menu---------\n");	
	}
	
    
	}while (addanother == 'y');
	
}
