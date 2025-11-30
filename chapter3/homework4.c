// check if a number is armstrong number
#include<stdio.h>
int main()
{
    int num, originalNum, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        int originalNum = num;
        int sum = 0;
        while(num != 0)
        {
            int digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        if(sum == originalNum)
        {
            printf("%d is an Armstrong number.\n", originalNum);
        }
        else
        {
            printf("%d is not an Armstrong number.\n", originalNum);
        }
    }
    else
    {
        printf("Please enter a positive integer.\n");
    }
        return 0;

}