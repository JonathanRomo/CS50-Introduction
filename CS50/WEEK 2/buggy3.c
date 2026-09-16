#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name = get_strin("Whats your name");
    printf("hello world, %s\n", name); 
}

//clang ls ./a.out
//clang -o buggy buggy3.c -lcs50
