#include <stdio.h>

// DEFINE 'BYTE' AS AN ALIAS FOR AN UNSIGNED 8-BIT CHARACTER
typedef unsigned char BYTE;

int main (int argc, char *argv[])
{
    // OPEN SOURCE FILE GIVEN AS FIRST ARGUMENT IN BINARY READ MODE ("rb")
    FILE *src = fopen(argv[1], "rb");
    
    // OPEN DESTINATION FILE GIVEN AS SECOND ARGUMENT IN BINARY WRITE MODE ("wb")
    FILE *dst = fopen(argv[2], "wb");

    // TEMPORARY BUFFER TO STORE A SINGLE BYTE
    BYTE b;

    // READ BYTE BY BYTE FROM SOURCE UNTIL END OF FILE (EOF) IS REACHED
    while(fread(&b, sizeof(b), 1, src) != 0)
    {
        // WRITE THE CURRENT BYTE TO THE DESTINATION FILE
        fwrite(&b, sizeof(b), 1, dst);
    }

    // CLOSE THE DESTINATION FILE AND FREE ITS RESOURCES
    fclose(dst);
    
    // CLOSE THE SOURCE FILE AND FREE ITS RESOURCES
    fclose(src);

    return 0;
}