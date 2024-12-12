//WAP to input two numbers and find the greatest number using ternary operator.
#include<stdio.h>
int main()
{
	
    int num1, num2, greatest;

    printf("Enter first numbers: ");
    scanf("%d", &num1);
    printf("Enter second numbers: ");
    scanf("%d", &num2);

    
    greatest = (num1 > num2) ? num1 : num2;      //? is a ternary operator

        printf("The greatest number is: %d\n", greatest);

    return 0;
}

