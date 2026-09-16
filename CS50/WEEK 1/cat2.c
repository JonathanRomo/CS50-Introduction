#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    while (true)
    { 
        int n = get_int("What's n? ");
        if (n > 0)
        {
            break;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n");
    }
}