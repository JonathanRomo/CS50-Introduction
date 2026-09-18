#include<cs50.h>
#include<stdio.h>

//SHOWS THE ADRESSES OF THE POINTERS IN THE MEMORY
int main (void)
{
    string s = "Hi!";
    printf("%p\n", s);
    printf("%p\n", s[0]);
    printf("%p\n", s[1]);
    printf("%p\n", s[2]);
    printf("%p\n", s[3]);
}