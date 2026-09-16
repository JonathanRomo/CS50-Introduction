#include <studio.h>
#include <cs50.h>

float average(int length, int numbers []);
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

float average(int length, int numbers [])
// when we use an array we always have to define the length, in many cases we wont know the real lenght
// we have to define the type of data in this array alwaus with empty brackets
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return sum / (float) length;
    // adds the decimal, before this was an integer so it couldnt show the decimals
}


