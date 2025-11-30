// WAP to check if given character is digit or not
#include<stdio.h>
int main() 
{
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit as true (1) or false (0)
    printf("%d\n", (ch >= '0' && ch <= '9'));
    return 0;
}
/*
  code in if else format:
  if(ch >= '0' && ch <= '9') 
    {
        printf("The character '%c' is a digit.\n", ch);
    } 
    else 
    {
        printf("The character '%c' is not a digit.\n", ch);
    }
*/