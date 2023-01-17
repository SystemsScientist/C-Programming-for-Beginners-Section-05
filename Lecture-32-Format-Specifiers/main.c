/*
    Author: Matt Johnson
    Directory: Lecture 32 Format Specifiers
    Purpose: program uses format specifiers
    Date: 01/17/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // use for bool data type

int main() {

    // initialize data types
    int integer_var = 100;
    float floating_var = 331.79;
    double double_var = 8.44e+11;
    char char_var = 'W';
    bool bool_var = 0;

    // use printf() to test data types
    printf("integer_var = %i\n", integer_var);
    printf("floating_var = %f\n", floating_var);
    printf("double_var = %e\n", double_var);
    printf("double_var = %g\n", double_var);
    printf("char_var = %c\n", char_var);
    printf("bool_var = %i\n", bool_var);

    // initialize data type
    float x = 3.9993232323;

    // use .nf, where n is an integer, to increase precision
    printf("\nWidth of format specifier for 2 decimal places is %.2f", x);
    printf("\nWidth of format specifier for 3 decimal places is %.3f", x);
    printf("\nWidth of format specifier for 4 decimal places is %.4f", x);
    printf("\nWidth of format specifier for 5 decimal places is %.5f", x);
    printf("\nWidth of format specifier for 6 decimal places is %.6f\n", x);

    return 0;
}
