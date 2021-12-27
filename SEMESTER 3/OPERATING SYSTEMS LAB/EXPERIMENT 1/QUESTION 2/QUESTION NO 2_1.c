#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;

    char filename[] = "lab2.txt", ch;
    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read contents from file
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    return 0;
}
