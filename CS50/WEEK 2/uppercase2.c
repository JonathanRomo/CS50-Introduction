#include <stdio.h>
#include <cs50.h>
#include <strng.h>
#include <ctype.h>
//Includes format options

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i, n = strlen(s); i < n, i++)
    {
        // if s[i] is lowercase
        if(islower(s[i]))
        {
            printf("%c", toupper(s[i]);
        }
        // Else if not lowercase
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
