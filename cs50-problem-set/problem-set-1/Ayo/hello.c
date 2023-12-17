//Pseudocode
//Prompt User for their name then say Hello User

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name: "); //declare a string with 'name' variable

    printf("hello, %s\n", name); //then print the name with %s
}

//I declare a string variable “name” with get_string and ask “What is your name:”
//Then print the user’s name with printf(); and also input “hello %s” to make it print the user’s name.