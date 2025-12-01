#include<stdio.h>
int main()
{
    //increment operator: ++
    int i = 1;
    printf("%d\n", i++); //use then increment
    printf("%d\n", ++i); //increment then use
    //decrement operator: --
    printf("%d\n", i--); //use then decrement
    printf("%d\n", --i); //decrement then use

    //i is iterator variable or counter variable
    // for loop example
    for(int i = 1; i <= 5; i++)
    {
        printf("Hello world %d\n", i);
    }
    //print numbers from 0 to 10
    for(int i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    //print characters from A to Z
    for(char ch = 'A'; ch <= 'Z'; ch++) //characters have ascii integer values in C
    {
        printf("%c ", ch);
    }

    //infite loop
    /*for(i=0; ;i++)
    {
        printf("infinite loop\n");
    }*/
   //runs until system memory exhausts--> crash
    return 0;
}