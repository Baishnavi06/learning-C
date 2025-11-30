// WAP to print the average of 3 numbers
#include<stdio.h>
int main() 
{
    float num1, num2, num3, average;

    // Input 3 numbers from user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate average
    average = (num1 + num2 + num3) / 3;

    // Print the average
    printf("The average of %.2f, %.2f and %.2f is: %.2f\n", num1, num2, num3, average);

    return 0;
}