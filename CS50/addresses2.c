#include<stdio.h>

//pointer %p declared by &n
int main (void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}