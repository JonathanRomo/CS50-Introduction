#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What is x? ");
    int y = get_int("What is y? ");

    if (x > y)
    {
        printf("x is greater than y\n");
    }
    if (x < y)
    {
        printf("x is less than y\n");
    }
    if (x == y) /* puede borrarse el if y el igual*/
    {
        printf("x is equal to y\n");
    }
}