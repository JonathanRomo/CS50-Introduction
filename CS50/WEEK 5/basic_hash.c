// Returns a number from 0 to 25
// Prints the hash value
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int hash (char *word);

int main (void)
{
    char *word = get_string("Word: ");
    printf ("Hash value: %i\n", hash (word));
}

int hash (char *word)
{

    //protects if its not null
    if (word == NULL || strlen (word) == 0)
    {
        return -2;
    }
    char c = word [0];
    if (isalpha(c))
    // checks if it isnt a number
    {
        // convert de letter to uppercase
        c = toupper(c);
        return c - 'A';
    }
    //-1 to avoid returning the firsh hash result
    return -1;
}