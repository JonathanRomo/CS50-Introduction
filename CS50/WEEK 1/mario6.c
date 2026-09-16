#include <studio.h>
#include <cs50.h>

// Given a numebr of bricjs, print that number of bricks
void print_row(int bricks); 


int main(void)
{
    // Prompt user for height (int)
int height

do
{
    height = get_int("Height: ");
}
while (height < 1);


    //Prin pyramind of that height
    for (int i = 0, i <= height, i++)
        {
            //Print row based on the height
            print_row(i + 1);
        }
}

//given the number of bricks, print that number of bricks
{
    for (int i = 0; i < bricks; i++)
        {
            printf("n");
        }
        printf("\n");
}