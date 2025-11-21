#include<stdio.h>
 int main()
 {
    int side; 
    printf("Enter the side length of the square: ");
    scanf("%d", &side);
    int area = side * side;
    printf("Area of the square: %d\n", area);
    return 0;
 }