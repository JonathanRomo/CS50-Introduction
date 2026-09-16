#include<cs50.h>
#include<stdio.h>

int get_n(void)
void meow(int times)
{
    // Get a number from the user
    int n = get_n()

    meow(n);
}


int get_n(void)
{
    int n;
    do
    {
        n = get_int("What's N?");
    }
    while (n < 0);
    return n;
    
}

void meow(int times)
{
    //Meow for some number of times
    for (int i = 0;i < times; i++)
}