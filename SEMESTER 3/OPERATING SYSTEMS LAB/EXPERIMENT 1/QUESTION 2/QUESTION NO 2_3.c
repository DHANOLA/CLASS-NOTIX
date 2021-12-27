#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[100];

    printf("Enter name of file to create: ");
    scanf("%s", filename);

    // Creation of a File.
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    fclose(fptr);
    return 0;
}
