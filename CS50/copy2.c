#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>


// BOTH T AND S OUTPUTS GET THE UPPPERCASE ON THE FIRST LETTER
int main (void)
{
    char *s = get_string("s: ");
    char *t = s;
    
    t[0] = toupper(t[0]);

    printf("%p\n", s);
    printf("%p\n", t);
}