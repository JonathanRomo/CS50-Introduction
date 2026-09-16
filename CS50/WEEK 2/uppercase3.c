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
        printf("%c", toupper(s[i]);
    }
    printf("\n");
}
