#include<stdio.h>
int main()
{
    //while loop example
    int i = 1; //iterator variable or counter variable declared outside the loop
    while(i <= 5)
    {
        printf("Hello world %d\n", i);
        i++; //incrementing the iterator variable at last of the loop body
    }

    //print numbers from 0 to 10 using while loop
    int num = 0;
    while(num <= 10)
    {
        printf("%d\n", num);
        num++;
    }

    //print characters from A to Z using while loop
    char ch = 'A';
    while(ch <= 'Z')
    {
        printf("%c ", ch);
        ch++;
    }

    //infinite loop using while
    /*
    while(1) //condition always true
    {
        printf("infinite loop\n");
    }
    */
    //runs until system memory exhausts--> crash

    return 0;
}