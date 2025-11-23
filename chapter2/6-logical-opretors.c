#include<stdio.h>
int main()
{
    // Logical Operators- used to combine multiple relational expressions
    // Logical Operators: &&, ||, !
    int a = 5, b = 10, c = 15;
    // Logical AND (&&)
    printf("(a < b) && (b < c): %d\n", (a < b) && (b < c)); // 1 (true)
    printf("(a > b) && (b < c): %d\n", (a > b) && (b < c)); // 0 (false)
    // Logical OR (||)
    printf("(a < b) || (b > c): %d\n", (a < b) || (b > c)); // 1 (true)
    printf("(a > b) || (b > c): %d\n", (a > b) || (b > c)); // 0 (false)
    // Logical NOT (!)
    printf("!(a < b): %d\n", !(a < b)); // 0 (false)
    printf("!(a > b): %d\n", !(a > b)); // 1 (true)

    //operator precedence: ! has highest precedence, followed by &&, then ||
    //precedence: ! then *,/,% then +,- then relational (==, !=, >, <, >=, <=, ==, !=) then logical AND(&&) then logical OR(||) then =
    //associativity: left to right for all except = which is right to left
    return 0;
}