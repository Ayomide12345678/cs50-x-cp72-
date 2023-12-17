//Pseudocode
//Prompt user for height
//If the height is less than 1 or greater than 8 (or not an integer at all), go back one step
//Iterate from number through height:
//On iteration, print hashes and then a newline

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; //declare int variable Height
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);  //make sure height is not less than 1 or greater than 8

    for (int row = 0; row < height; row++) //to print new line as ROW
    {
        for (int space = height - row - 1; space > 0; space--) //to print SPACE
        {
            printf(" ");
        }
        for (int hash = 0; hash < row + 1; hash++) //to print hashes(#)
        {
            printf("#");
        }
        printf("\n");
    }
}
﻿

//Mario less code explanation:

// I declare user Mario height with int “height”
// I use do while loop to make sure the user cooperates and doesn’t input height larger than 8 or less than 1.
// Then use for loop to iterate row over the height so that it can print 8 rows.
// Then use another for loop to iterate over row and height for it to print the space required for program to left align the Mario steps.
// Hash for loop iterate over row for it to print the “#” like the order of the step