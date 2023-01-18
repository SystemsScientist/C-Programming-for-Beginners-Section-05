/*
    Author: Matt Johnson
    Subject: demonstrate and challenge
    Purpose: program defines an enum type and uses that type
             to display the values of some variables
    Date: 01/18/2023

    Instructions:

        1. program should create an enum type named Company
            - valid values for this type are GOOGLE, FACEBOOK, XEROX,
              YAHOO, EBAY, and MICROSOFT
        2. program should create three variables of the above enum
           type that are assigned values:
            - XEROX, GOOGLE, and EBAY
        3. program should display as output, the value of the three
           variables with each variable separated by a newline
            - correct output would be if XEROX, GOOGLE, and EBAY
              variables are printed in that order
                + 2
                + 0
                + 4

        Hints:

            - define the enum type and its values
            - declare and intialize three variables with the values
              specified above
            - use printf() to display the value of the enum variables
                + use the '\n' escape character to display a new line
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // define and declare enum data types
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company xerox, google, ebay;

    // assign enum data types
    xerox = XEROX;
    google = GOOGLE;
    ebay = EBAY;

    // display variable outputs
    printf("%d\n", xerox);
    printf("%d\n", google);
    printf("%d\n", ebay);

    return 0;
}
