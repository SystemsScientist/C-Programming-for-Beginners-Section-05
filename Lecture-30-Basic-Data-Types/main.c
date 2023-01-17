/*
    Author: Matt Johnson
    Purpose: program illustrates data types
    Date: 01/17/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    float matt = 23.333;
    double matt2 = 55.555555555; // truncates at 6 decimal places
    bool bool_variable = true;

    // use printf() to test data types
    printf("float matt : %f\n", matt);
    printf("double matt2: %lf\n", matt2);
    printf("bool bool_variable: %d\n", bool_variable);

    return 0;
}
