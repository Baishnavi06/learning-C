#include<stdio.h>
int main()
{
   // Practice 7: Check if given code is valid or not
   printf("%d", 8==8); // valid code, outputs 1
    int x; int y = x; // valid code, but y has indeterminate value
    //int x, int y = x; invalid code, cannot declare variables like this
    //int x,y=x; invalid code, cannot initialize y with x in declaration
    //char stars = '*****'; // invalid code, cannot assign string to char
    char star = '*'; // valid code, assigns single character to char
    return 0;
}