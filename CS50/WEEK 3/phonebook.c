#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string names [] = {"Kelly", "David","John"};
    string numbers [] = {"+1-617-385-1000", "+1-617-385-1000", "+1-617-468-2750"};

    strings name = get_string("Name: ")
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == o)
        {
            printf("Found \n", numbers[i]);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}