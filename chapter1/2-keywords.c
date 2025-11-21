#include<stdio.h>
int main()
{
   // C Keywords
   // Keywords are reserved words in C that have special meaning
   // They cannot be used as variable names, function names, or any other identifiers

   // Some common C keywords include:
   //int auto break case char const continue default do double else enum extern float for goto if long register return short signed sizeof static struct switch typedef union unsigned void volatile while

   // Example usage of some keywords
   int num= 10; // 'int' is a keyword for integer data type
   float decimal = 5.5; // 'float' is a keyword for floating-point data type

   if (num > 5) // 'if' is a keyword for conditional statements
   {
       printf("Number is greater than 5\n");
   }
   else // 'else' is a keyword for alternative condition
   {
       printf("Number is 5 or less\n");
   }

   return 0; // 'return' is a keyword to return a value from a function
}