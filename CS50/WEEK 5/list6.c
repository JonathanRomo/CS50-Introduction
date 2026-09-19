#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main (void)
{
    node *list = NULL;
    
    for (int i = 0; i < 3; i++) 
    {
        node *n = malloc(sizeof(node));
        if(list == NULL)
        {
        return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;

        // Prepend node to the list
        n->next = list;
        list = n;
    }
    // Print numbers
    node *ptr = list;
    while (ptr != NULL) 
    {
        printf("%i\n, ptr->number");
        ptr = ptr->next;
    }
    return 0;
}