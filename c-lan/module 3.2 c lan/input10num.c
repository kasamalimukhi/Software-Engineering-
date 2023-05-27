//10 numbers from the user and print greatest of all.

#include <stdio.h>
  int main() {
    // Taking Variables
    int a[10],i,greatest=a[0];

    //Taking exactly 10 inputs in an array by using for loop
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) {
      scanf("%d", &a[i]);
    }

    //Iterating through the array and comparing all the values, the one which is the greatest of all is printed
    for (i = 0; i < 10; i++){
      if (a[i] > greatest){
        greatest = a[i];}
      }
      
    printf("Greatest of ten numbers is : %d", greatest);
    
    return 0;
  }
