
 #include <stdio.h>
 
 int main()
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