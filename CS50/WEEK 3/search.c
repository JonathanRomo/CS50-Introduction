#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int numbers [] = {20, 500, 10, 5, 100, 50};

    int n = get_int("Number: ")
    for (int i; i < 7; i++)
    {
        if (numbers [1] == n )
        {
            printf("Found \n");
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}