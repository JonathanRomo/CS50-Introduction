#include <studio.h>
/* studio.h is a header library in C that provides input and output functions, such as printf() and scanf(). It is necessary to include this library in order to use these functions in your program.##
*/

int main(void)
{
    printf("Hello, world!\n");
}

/* The main function is the entry point of a C program. It is where the program starts executing. In this case, the main function prints "Hello, world!" to the console using the printf() function. The \n at the end of the string is an escape sequence that represents a newline character, which moves the cursor to the next line after printing.##

## CODE EN TERMINAL: CODE HELLO.C##
## MAKE HELLO ##
## ./hello_world ##
## clear TO CLEAR TERMINAL ##
*/

/*
 Escape secuences in C are used to represent special characters in strings. In the code snippet you provided, the escape sequence `\n` is used to represent a newline character. This means that when the program is run, it will print "Hello, world!" followed by a new line.##
\n
\r
\"
\'
\\

 get_string() is a function in the CS50 library that allows you to get a string input from the user. It is similar to scanf(), but it is safer and easier to use. The function takes no arguments and returns a string that the user inputs. You can use this function to get input from the user in your program.##
string answer = get_string("What is your name? ")
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What is your name? ");
    printf("Hello, %s!\n", answer);
}



if (x > y)
{
    printf("x is greater than y\n");
}




if (x > y)
{

}
else 
{

}



if (x > y)
{
    
}
else if (x < y)
{
    
}
else if (x == y)
{

}


if (x > y)
{
    printf("x is greater than y\n");
}
else if (x < y)
{
    printf("x is less than y\n");
}
else
{
    printf("x is equal to y\n");
}




/* 
bool %b
char es %c
double %lf
float %f
int %d
int %d
long %ld
string %s
*/

int counter = 0;
counter = counter + 1;
counter += 1;
counter++;
