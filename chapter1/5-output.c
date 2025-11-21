 
 #include <stdio.h>
 int main()
 {
    //output formatting
    printf("Hello, C Programming!\n"); // \n for new line
    printf("Tab\tSeparated\tValues\n"); // \t for tab space

    //cases
    int num = 10;
    printf("number: %d\n", num); // integer
    float fnum = 5.6789;
    printf("output: %.2f\n", fnum); // float
    char ch = 'a';
    printf("Character: %c\n", ch); // character
    //these are output specifiers
    return 0;
 }