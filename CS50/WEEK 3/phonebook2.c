#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string person;
} person;


int main (void)
{
    person people [3];
    
    people[0].name = "Kelly"
    people[0].number = "+1-617-385-1000"

    people[1].name = "David"
    people[1].number = "+1-617-385-1000"

    people[2].name = "John"
    people[2].number = "+1-617-385-2750"


    strings name = get_string("Name: ")
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i], name) == o)
        {
            printf("Found \n", people[i]);
            return 0;
        }
    }
    printf("Not Found \n");
    return 1;
}