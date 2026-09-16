#include <stdio.h>
#include <cs50.h>
#include <strng.h>
// library to count the string length

int main (void)
{
    string name = get_string("Name: ");
    printf("%i\n", strlen(name));
    //counts the length of the string until the bracket declared value is 0/null/ending
}