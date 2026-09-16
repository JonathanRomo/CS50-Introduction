#include <stdio.h>
#include <cs50.h>
#include <strng.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    for (int i, n = strlen(s); i < n, i++)
    {
        // if s[i] is lowercase
        if(s[i] >= 'a' && s [i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        // Else if not lowercase
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
