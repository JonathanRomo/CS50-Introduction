#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// malloc
// free
// strcopy

int main (void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcopy(t,s);

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}