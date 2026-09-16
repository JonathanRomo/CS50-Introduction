#include <studio.h>
#include <cs50.h>

int main(int times)
{
    int n = get_int("What's n? ");
    meow(n);
}

void meow(int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("Meow\n");
    }
}
