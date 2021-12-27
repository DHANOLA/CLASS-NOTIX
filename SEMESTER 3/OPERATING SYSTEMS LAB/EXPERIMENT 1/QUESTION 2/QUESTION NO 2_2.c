#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;

    char filename[] = "lab2.txt", s[80];
    // Open file
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Write contents to a file
    printf("\nEnter a few lines of text:\n");
    while (strlen(gets(s)) > 0)
    {
        fputs(s, fptr);
        fputs("\n", fptr);
    }
    fclose(fptr);
    return 0;
}
