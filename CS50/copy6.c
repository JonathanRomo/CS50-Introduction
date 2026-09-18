#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// malloc
// free
// strcopy
// checks for memory available, if it detects none, shows null and stops
// now avoids executing if theres no input, i.e. pressing enter with no value
// now it also frees the space that was taken before by malloc
// it only used malloc for t not for s

int main (void)
{
    char *s = get_string("s: ");
    if(s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);
    if(s == NULL)
    {
        return 1;
    }

    strcopy(t,s);
       if(strlen(s) > 0)
    {
        t[0] = toupper(t[0]);

    }
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}