/*
    Author: Matt Johnson
    Subject: demonstration and challenge
    Purpose: program displays the perimeter and area of a rectangle
    Date: 01/18/2023

    Instructions:

        1. program should create 4 variables of type double
            - one variable to store the width of the rectangle
            - one variable to store the height of the rectangle
            - one variable to store the perimeter of the rectangle
            - one variable to store the area of the rectangle
        2. program should perform the calculation for the perimeter of a rectangle
            - use the "+" operator for addition and the "*" operator for multiplication
            - perimeter is calculated by adding the height and width and then
              multiplying by two
            - area is calculated by multiplying the width * height variables
        3. program should display the height, width, and perimeter variables in the
           correct format in one print statement
        4. program should display the height, width, and area variables in the
           correct format in one print statement

        Hints:

            - create a project in Code::Blocks
            - edit the main.c file that is auto-generated
            - declare and initialize the height and width variables to any value,
              i.e., hard-coded and of type double
            - declare the perimeter and area values to 0.0
            - assign to the perimeter and area values the correct data based on calculations
                + perimeter = 2.0 * (height + width)
                + area = width * height
            - use printf function and the correct format specifiers to display the
              required output
            - compile and link source code
            - run program
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // initialize variables
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    // perform calculations
    perimeter = 2.0 * (height + width);
    area = height * width;

    // print area and perimeter
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);
    printf("The are of the rectangle is: %.2lf\n", area);

    return 0;
}
