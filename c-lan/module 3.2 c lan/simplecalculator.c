//simple calculator
#include <stdio.h>
 
int main(){
    /* Variable declation */
    int firstNumber, secondNumber;
    int addition, subtraction, multiplication, modulo;
    float division;
     
    printf("Enter First Number: ");
    scanf("%d",&firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &secondNumber);
     
    /* Adding two numbers */
    addition= firstNumber + secondNumber;
    /* Subtracting two numbers */
    subtraction = firstNumber - secondNumber;
    /* Multiplying two numbers*/
    multiplication = firstNumber * secondNumber;
    /* Dividing two numbers */
    division = firstNumber / secondNumber;
    /* returns remainder of after an integer division */
    modulo = firstNumber % secondNumber;
     
    printf("\naddition = %d", addition);
    printf("\nsubtraction  = %d", subtraction);
    printf("\nMultiplication = %d", multiplication);
    printf("\nDivision = %.3f", division);
    printf("\nRemainder = %d", modulo);
     
    return 0;
}
