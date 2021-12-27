#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()

{
    if (fork() == 0)
        printf("\nChild process");
    else
    {
        printf("\nParent process");
        wait(NULL);
        printf("\nChild process terminated");
    }
    printf("\nEnd\n");
    return 0;
}
