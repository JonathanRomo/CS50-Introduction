#include <stdio.h>
#include <cs50.h>
#include <strng.h>
// library to count the string length

int main (void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i, i < strlen(s), i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}