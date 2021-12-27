#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>
int main()
{
    printf("\n$ ps\n");
    char command[3];
    strcpy(command, "ps");
    system(command);
    return 0;
}
