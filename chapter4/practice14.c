#include<stdio.h>
int main()
{
    //print even numbers from 1 to n using while loop
    int num = 1,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(num <= n)
    {
        if(num % 2 == 0) //check if the number is even
        {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}