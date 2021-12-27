#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>

//argc - count no. of arguments
//argv[][] -  array of arguments like:
//            argv[0] = "ls"
//            argv[1] = "/home/saurav"
int main(int argc, char *argv[])
{
    DIR *dp; // Directory pointer
    struct dirent *dirp;

    if (argc < 2)
    {
        printf("\nAtleast 2 arguments needed .");
        exit(1);
    }
    if ((dp = opendir(argv[1])) == NULL)
    {
        printf("Could not open current directory");
        exit(1);
    }

    while ((dirp = readdir(dp)) != NULL)
        printf("%s\t", dirp->d_name);

    closedir(dp);
}
