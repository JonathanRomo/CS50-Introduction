#include<cs50.h>
#include<stdio.h>
#include<string.h>

//just overwrites everything in the file
int main (void)
{
    FILE *file = fopen("phonebook.csv", "w");

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file,"%s,%s\n", name, number);

    fclose(file);
}