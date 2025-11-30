#include<stdio.h>
int main()
{
     int x = 2;

    if(x=1){
        printf("One\n");
    }
    else{
        printf("Not One\n");
    }
    return 0;
//answer: The issue in the code is that the condition in the if statement uses the assignment operator '=' instead of the equality operator '=='. This means that 'x' is being assigned the value 1, which always evaluates to true, so "One" will always be printed regardless of the initial value of 'x'.
    // Corrected version:
    /*if(x==1){
        printf("One\n");
    }
    else{
        printf("Not One\n");
    }*/
}
   
