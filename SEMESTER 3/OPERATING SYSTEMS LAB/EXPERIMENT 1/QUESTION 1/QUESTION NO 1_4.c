#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    int status;
    pid_t pid;
    if (fork() == 0)
        exit(0);
    else
        pid = sleep(2);
    printf("\nParent id is: %d", getpid());
    printf("\n Child id is: %d\n", pid);
    return 0;
}
