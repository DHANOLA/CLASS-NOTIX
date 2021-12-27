#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main()
{
    int status;
    pid_t pid;
    pid = fork();

    if (pid == 0)
    {
        printf("\nI am Child , My pid is %d and My Parent id is %d", getpid(), getppid());
        exit(0);
    }
    else
    {
        wait(&status);
        printf("\nI am Parent , My id is %d and My Child id is %d\n", getpid(), pid);
        exit(0);
    }
}
