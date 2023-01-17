/*
    Author: Matt Johnson
    Directory: Lecture 31 Enums and Chars
    Purpose: program demonstrates enum and char data types
    Date: 01/17/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // use for bool data type

int main() {

    // enum data types
    enum gender {male, female};
    enum gender my_gender;

    my_gender = male; // can only assign male or female

    enum gender another_gender = female;
    bool is_male = (my_gender == another_gender);

    // use printf() to test enum data types
    printf("my_gender: %d\n", my_gender);           // prints 0, which is position
    printf("another_gender: %d\n", another_gender); // prints 1, which is position
    printf("is_male: %d\n", is_male);               // prints 0, which is false

    // character data types
    char my_character = '\n';

    printf("\nmy_character: %c", my_character);       // prints a new line

    return 0;
}
