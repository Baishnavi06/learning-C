#include<stdio.h>
 int main()
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