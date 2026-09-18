#include<stdio.h>

//shows the values of each character in the string by its place
// instead of the brackets que use the pointer to the location of S
// it will always go to the first value of the string
// we can use arithmetic operations on pointers
int main (void)
{
    char *s = "Hi!";
    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
}