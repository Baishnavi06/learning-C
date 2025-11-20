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
 {
    // Constants in C
    const float PI = 3.14159;  // Constant variable
    // PI = 3.14; // This will cause an error as PI is constant
    printf("Value of PI: %.5f\n", PI);

    //type of constants
    const int MAX_AGE = 100;   // Integer constant
    const char NEWLINE = '\n'; // Character constant
    const float GRAVITY = 9.81; // Real constant
    return 0;
 }
 {
    // keywords in C
    // Examples of some keywords
    int returnValue = 0; // 'int' and 'return' are keywords
    float average;       // 'float' is a keyword
    return 0;
 }
 {
    // comments in C
    // This is a single-line comment
    /*
       This is a multi-line comment.
       It can span multiple lines.
    */
 }
 {
    //output formatting
    printf("Hello, C Programming!\n"); // \n for new line
    printf("Tab\tSeparated\tValues\n"); // \t for tab space

    //cases
    int num = 10;
    printf("number: %d\n", num); // integer
    float fnum = 5.6789;
    printf("output: %.2F\n", fnum); // float
    char ch = 'a';
    printf("Character: %c\n", ch); // character
    return 0;
 }
 {
    //input formatting
    int age;
    float height;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age); // %d for integer

    printf("Enter your height: ");
    scanf("%f", &height); // %f for float

    printf("Enter your grade: ");
    scanf(" %c", &grade); // %c for character (note the space before %c)

    printf("You entered - Age: %d, Height: %.2f, Grade: %c\n", age, height, grade);
    return 0;
 }
}