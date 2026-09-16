#include <cs50.h>
#include <stdio.h>
#include <string.h>

//  WE NEED A LIBRARY TO COMPARE STRINGS strngcmp from string.h
int main (void)
{
    string strings [] = {"battleship", "boot","cannon","iron","thimble","top hat"};

    strings s = get_string("String: ")
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == o)
        {
            printf("Found \n");
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}