#include<stdio.h>

//pointer %p declared by &n
//now it returns the value stored in the location marked by the pointer
int main (void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", *p);
}