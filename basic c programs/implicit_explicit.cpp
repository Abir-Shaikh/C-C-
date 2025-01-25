//Write a program to demonstrate implicit and explicit type casting in C.

#include <stdio.h>

int main() {
    // Implicit Type Casting
    int intNum = 5;
    float floatNum;

    // Automatically converts int to float
    floatNum = intNum;

    printf("Implicit Type Casting:\n");
    printf("Integer value: %d\n", intNum);
    printf("Converted to float: %.2f\n", floatNum);

    // Explicit Type Casting
    float floatValue = 7.8;
    int intValue;

    // Manually converting float to int
    intValue = (int)floatValue;

    printf("\nExplicit Type Casting:\n");
    printf("Float value: %.2f\n", floatValue);
    printf("Converted to integer: %d\n", intValue);

}
