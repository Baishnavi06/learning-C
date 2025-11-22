#include<stdio.h>
#include<math.h> //for pow() function

int main()
{
        int x = 2, y = 3, z = 4;
        int sum = x + y + z; //arithmetic instruction, adds the values of x, y, and z
        int product = x * y * z; //arithmetic instruction, multiplies the values of x, y, and z
        //single variable on the LHS
        //+,-,*,/,% are arithmetic operators
        int q,p,r=2;
        int power = pow(q,p); //function call instruction, calculates b raised to the power of c
        p = r % 2; //modulus instruction, computes the remainder of a divided by 2
        //examples of returns of modulus operator
        printf("%d", 16%10); //prints 6
        printf("%d", 3%2); //prints 1
        printf("%d", -3%2); //prints -1
        printf("%d", 3%-2); //prints 1
        //type conversion
        //int op int -> int
        //float op float -> float
        printf("%f", 2*2.0); //int op float -> float, if 2*2.0 => 4.0
        printf("%d", 2/3); //int division, prints 0; because both operands are integers
        printf("%f", 2.0/3); //float division, prints 0.666667

        //operator precedence: *,/,% have higher precedence than +,- then =
        int result = 5 + 3 * 2; //multiplication has higher precedence
        printf("%d", result); //prints 11
        int result1 = 5 * 10 / 3 * 2; //associativity, left to right if same precedence
        printf("%d", result1); //prints 33
        int result2 = (5 + 3) * 2; //parentheses alter precedence
        printf("%d", result2); //prints 16
        return 0;
}