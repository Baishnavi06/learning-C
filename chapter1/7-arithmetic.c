#include<stdio.h>
int main()
{
   // Arithmetic Operations in C
   int a = 15;
   int b = 4;   
    // Addition 
    int sum = a + b;
    printf("Sum: %d\n", sum); // Output: 19
    // Subtraction
    int difference = a - b;
    printf("Difference: %d\n", difference);    // Output: 11
    // Multiplication
    int product = a * b;
    printf("Product: %d\n", product);    // Output: 60  
    // Division
    int quotient = a / b;
    printf("Quotient: %d\n", quotient);    // Output: 3
    // Modulus
    int remainder = a % b;
    printf("Remainder: %d\n", remainder);    // Output: 3

    //taking input from user
    int x, y, sum2;   
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    sum2 = x + y;
    printf("Sum of %d and %d is: %d\n", x, y, sum2);

    //without using third variable
    int m = 10, n = 20;
    printf("enter two integers: %d %d\n", m, n);
    printf("sum is: %d\n", m + n);
    printf("difference is: %d\n", m - n);
    printf("product is: %d\n", m * n);
    printf("quotient is: %d\n", m / n);
    printf("remainder is: %d\n", m % n);
    
   return 0; // 'return' is a keyword to return a value from a function
}