#include <cs50.h>
#include <stdio.h>

void draw (int n);
int main (void)
{
    int height = get_int("Height: ");
    
    draw(height);
}

void draw (int n)
{
    //For each row of the pyramid 
    for (int i = 0; i < n; i++)
    {
        //For each column of the pyramid 
        for (int j = 0; j < i; j++)
        printf("#");
    }
    printf("\n");
}