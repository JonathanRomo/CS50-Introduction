#include <studio.h>
#include <cs50.h>

float average(int length, int numbers [])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + numbers [i];
    }
}
// we define what the average function will do with a loop and we need to define the lenght of the numbers
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
    printf("Average: %f/n", average(N, scores));
}
