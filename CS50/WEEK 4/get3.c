#include <stdio.h>
#include <stdlib.h> // Necesario para malloc y free

int main(void)
{
    // Reservamos memoria para 4 caracteres (ej. "hi" o "abc")
    char *s = malloc(4); 
    
    printf("s: ");
    scanf("%s", s);
    
    printf("n: %s\n", s);
    
    // Se libera la memoria
    free(s);
}