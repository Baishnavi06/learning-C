// chapter1 : variable

#include <stdio.h>

int main() 
{
 {
   // Variable declaration and initialization
   // tip: Use meaningful variable names
    int number = 25;
    float b = 5.5;
    char c = 'A';
   // Note: Variable names are case-sensitive
    int a = 10;
    int A = 20;
   // Note: 1st character must be a letter or underscore
   // Note: No special characters allowed except underscore (_)
   // Note: No spaces allowed in variable names
   // Note: Cannot use C keywords as variable names
    int final_result = number + a;
    printf("Final Result: %d\n", final_result);

    printf("Integer value: %d\n", a);
    printf("Float value: %.2f\n", b);
    printf("Character value: %c\n", c);
   // Note: Use %d for int, %f for float, %c for char in printf
    return 0;
 }
 {
    // data types in C
    int age = 20;               // Integer type
    float height = 5.9f;       // Floating-point 
    char grade = 'A';          // Character type
    double weight = 70.5;      // Double precision floating-point type
    
    return 0;
 }
}