#include<stdio.h>
int main()
{
    // Assignment Operators: =, +=, -=, *=, /=, %=
    int a = 10; // simple assignment
    printf("Initial value of a: %d\n", a);
    a += 5; // equivalent to a = a + 5
    printf("After a += 5: %d\n", a);    
    a -= 3; // equivalent to a = a - 3
    printf("After a -= 3: %d\n", a);
    a *= 2; // equivalent to a = a * 2
    printf("After a *= 2: %d\n", a);
    a /= 4; // equivalent to a = a / 4
    printf("After a /= 4: %d\n", a);
    a %= 3; // equivalent to a = a % 3
    printf("After a %= 3: %d\n", a);
    
    return 0;
}