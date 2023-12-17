// Pseudocode

// Prompt user for an amount of Change
// if the change is less than 0, reprompt the user until cooperate.
// Due to floating impression, round the cent to the nearest penny
// Then use the largest coins possible, keeping track of coins used.
// Print the number of coins.

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int count = 0;   //to count
    float change; //declare a float variable "change"
    do
    {
        change = get_float("Change owed: ");  //get change from user
    }
    while (change < 0);    //make sure change is not less than 0
    int cent = round(change * 100); //round off to the nearest whole number

    while (cent >= 25)
    {
        cent = cent - 25; // divide by 25 and give account of remainder
        count++;  //count number of times
    }
    while (cent >= 10)
    {
        cent = cent - 10; //divide by 10 and give account of remainder
        count++;       //count number of times
    }
    while (cent >= 5)
    {
        cent = cent - 5;    //divide by 5 and give account of remainder
        count++;  //count number of times
    }
    while (cent >= 1)
    {
        cent = cent - 1;  //divide by 1 and give account of remainder
        count++;     //count number of times
    }
    printf("%i\n", count);
}

// Cash code explanation

// I declare a float variable with the name “Change”.
// Then I use a do-while loop, to make sure the user did not input digit less than 0;
// I use while loop and Subtraction to divide the Change by the Coins (25¢, 10¢, 5¢, 1¢),
// thus using count variable to count the number of times coins is used to divide the money.
// then I print the number of coins with the count.