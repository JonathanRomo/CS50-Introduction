#include<stdio.h>

//shows the values of each string in the string by its place
// instead of the brackets que use the pointer to the location of S
// it will always go to the first value of the string
// the location on the memory makes it repeat until !
int main (void)
{
    char *s = "Hi!";
    printf("%s\n", *s);
    printf("%s\n", *(s + 1));
    printf("%s\n", *(s + 2));
}