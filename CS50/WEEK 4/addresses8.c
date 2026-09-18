#include<stdio.h>

//SHOWS THE STRING VALUE NOW WITHOUT THE CS50 LIBRARY
// A CS50 LIB STRING IS BASICALLY A CHAR *S
//shows the values of each character in the string by its place
int main (void)
{
    char *s = "Hi!";
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);
}