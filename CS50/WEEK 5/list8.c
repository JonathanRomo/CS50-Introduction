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
    // Memory for numbers
    node *list = NULL;
    
    // Build list
    for (int i = 0; i < 3; i++) 
    {
        //Allocate node for number
        node *n = malloc(sizeof(node));
        if(n == NULL)
        {
        return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;

        // If list is empty
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }
        // If list has numbers already
        else
        {
            //Iterative over nodes in list
            for(node *ptr = list; ptr != NULL; ptr = ptr->next) 
            {
                //If at the end of the list
                if(ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    // Print numbers
    for(node *ptr = list; ptr != NULL; ptr = ptr->next) 
    {
        printf("%i\n, ptr->number");
    }

    // Free memory
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    return 0;
}