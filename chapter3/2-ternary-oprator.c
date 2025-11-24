#include<stdio.h>
int main()
{
    // Ternary Operator Example
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using ternary operator to check if the number is even or odd
    (num % 2 == 0) ? printf("%d is an even number.\n", num) : printf("%d is an odd number.\n", num);

    return 0;
}