//WAP to print the smallest number
#include<stdio.h>
int main()
{
    float num1, num2, num3, smallest;

    // Input 3 numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Determine the smallest number using logical operators
    if ((num1 <= num2) && (num1 <= num3)) 
    {
        smallest = num1;
    } 
    else if ((num2 <= num1) && (num2 <= num3)) 
    {
        smallest = num2;
    } 
    else 
    {
        smallest = num3;
    }

    // Print the smallest number
    printf("The smallest number among %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, smallest);

    return 0;
}