#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//argc - count no. of arguments
//argv[][] -  array of arguments like:
//            argv[0] = "./a.out"
//            argv[1] = "-c"
//            argv[2] = "hello"
//            argv[3] = "lab2.txt"
int main(int argc, char *argv[])
{
    DIR *dp; // Directory pointer
    struct dirent *dirp;

    if (argc < 4)
    {
        printf("\nAtleast 4 arguments needed.");
        exit(1);
    }
    int i;
    FILE *fptr;
    char filename[100], ch[2], search[20], str[200], word[20];
    ch[1] = '\0';
    strcpy(str, "");
    strcpy(search, argv[2]);
    strcpy(filename, argv[3]);
    printf("\n%s\t%s", search, filename);
    int j, count = 0;

    int search_len = strlen(search);
    // Open file
    fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("\ngrep: %s No such file or directory", filename);
        exit(0);
    }

    // Read contents from file to str

    *ch = fgetc(fptr);
    while (*ch != EOF)
    {
        strcat(str, ch);
        *ch = fgetc(fptr);
    }
    printf("\n%s", str);
    fclose(fptr);
    int str_len = strlen(str);

    for (i = 0; i <= (str_len - search_len); i++)
    {
        strcpy(word, "");
        for (j = 0; j < search_len; j++)
        {
            ch[0] = str[i + j];
            strcat(word, ch);
        }
        if (!strcmp(word, search))
            count++;
    }

    printf("\n%d", count);
}
