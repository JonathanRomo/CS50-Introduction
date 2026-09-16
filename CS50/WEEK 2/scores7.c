#include <studio.h>
#include <cs50.h>

int main (void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    // Defines the constant N which will be used in the loop and we dont have to declare it again and again
    {
        scores[i] = get_int("Score: ");
    }
    // defines an array size and each position value by a loop
    printf("Average: %f/n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}
