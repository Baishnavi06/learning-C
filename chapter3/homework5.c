#include<stdio.h>
int main()
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    if(x>0)
    {
        printf("it is a natural number\n");
    }
    else
    {
        printf("it is not a natural number\n");
    }
    return 0;
}