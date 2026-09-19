// Implements a sorted linked list 
// Frees memory in cases of error too

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

//new function
void unload (node *list);

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
            // unloads the list if null
            unload(list);
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
        
        // If number belongs at beginning of list, compares the size and brings it to the front
        else if (n->number < list->number)
        {
            n->next = list;
            list = n;
        }

        // If number belongs later in list
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
                
                //If in middle of list, compares the value and brings it between
                if (n->number < ptr->next->number)
                {
                    n->next = ptr->next;
                    ptr->next = n;
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
    unload (list);
    return 0;
}

// The new function to free the memory so we dont write it all the time
void unload(node *list)
{
    node *ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
}
