#include<stdio.h>
int main()
{
    // print 1(true) or 0(false) for following
    int x;
    printf("enter an integer: ");
    scanf("%d",&x);
    printf("%d", x>9 && x<100);
    // output: 1 if x is a two-digit number, 0 otherwise
    return 0;
}