#include<stdio.h>

//passing by reference
//the version before only swapped the copies, not the actual values 
//by giving the pointers it allows it to find the actual locations to swap

void swap(int a, int b);

int main (void)

{
    int x = 1;
    int x = 2;

    printf("x is %i, y is %i\n", x, y);
    swap (&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b);

{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}