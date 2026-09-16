#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    // checks for one word only
    {
        printf("Hello %s\n", argv[1]);
        //bracket 1 executes the program i.e. get the name and bracket [0] shows the name of the program
    }
    else 
    {
        printf("Hello World!\n")
    }
}
