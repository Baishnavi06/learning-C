#include<stdio.h>

 int main()
        {
            int a=1.9999999; //implicit conversion from double to int, fractional part is truncated
            printf("%d",a);
            int b = (int)1.9999999; //explicit conversion from double to int, fractional part is truncated
            printf("%d",b);
            return 0;
        }