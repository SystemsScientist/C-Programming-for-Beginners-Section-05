/*
    Author: Matt Johnson
    Subject: Command Line Arguments
    Purpose: execute command line arguments
    Date: 01/18/2023

    Instructions:

        1. click on project title, above the sources directory,
           i.e., folder
        2. click on "Project" in the ribbon
        3. scroll down to "Set programs' arguments"
        4. click on "Set programs' arguments"
        5. type argument in "Program arguments" box
        6. click "OK"
        7. compile, build, and run program
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int number_of_arguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d", number_of_arguments);
    printf("\nArgument 1 is the program name: %s", argument1);
    printf("\nArgument 2 is the command line argument: %s", argument2);

    return 0;
}
