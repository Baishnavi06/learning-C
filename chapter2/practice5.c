#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("%d", x % 2 == 0);
    // output: 1 if even, 0 if odd
    return 0;
}