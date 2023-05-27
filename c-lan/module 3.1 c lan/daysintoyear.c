#include <stdio.h>  
   
int main() {  
    int inputDays, years, months, weeks, days;  
   
    /* 
     Take number of days as input from user
     */ 
    printf("Enter number of Days: ");  
    scanf("%d", &inputDays);  
   
    /* 
     * 1 Year = 365 Days, 1 Month = 30 Days, 1 Week = 7 Days
     * To keep things simple, We are not considering Leap years 
     * and assuming 1 Month = 30 Days   
     */ 
    years = inputDays/365;
    // Remaining days after year
    inputDays = inputDays - years*365; 
    months = inputDays/30;
    // Remaining days after month
    inputDays = inputDays - months*30; 
    weeks = inputDays/7;
    // Remaining days after week
    inputDays = inputDays - weeks*7; 
    days = inputDays;
     
    printf("Years : %d\n", years);  
    printf("Months : %d\n", months);  
    printf("Weeks : %d\n", weeks);  
    printf("Days : %d", days);  
   
    return 0;  
} 
