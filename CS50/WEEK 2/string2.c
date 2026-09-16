#include <stdio.h>
#include <cs50.h>
#include <strng.h>
// library to count the string length

int main (void)
{
    string s = get_string("Input: ");
    int n = strleng(s); 
    printf("Output: ");
    for (int i, i < n, i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}