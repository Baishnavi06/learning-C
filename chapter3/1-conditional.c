#include<stdio.h>
int main()
{
    //conditional statement types - if else and switch case
    //1. if statement
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("%d is a positive number.\n", num);
    } 

    //2. if-else statement
    if(num % 2 == 0)
    {
        printf("%d is an even number.\n", num);
    }
    else
    {
        printf("%d is an odd number.\n", num);
    }

    //3. if - else if - else statement
    if(num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else if(num < 0)
    {
        printf("%d is a negative number.\n", num);
    }
    else
    {
        printf("The number is zero.\n");
    }
    
    //4. switch-case statement
    int day;    
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }
    //break is used to exit the switch-case
    //cases can be in any order
    //nested switch-case is also possible
    return 0;
}
   