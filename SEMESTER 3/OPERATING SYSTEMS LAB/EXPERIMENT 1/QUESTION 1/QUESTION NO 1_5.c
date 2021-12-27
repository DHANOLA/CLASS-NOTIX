#include <stdio.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>

void handle_sigint(int sig)
{
    printf("Caught Signal %d\n", sig);
    kill(getpid(), sig);
    printf(" End");
    exit(0);
}
int main()
{
    pid_t pid;
    int status;
    if ((pid = fork()) == 0)
    {
        printf("\nChild Process ID : %d", pid);
    }
    else
    {
        wait(&status);
        printf("\nParent Process ID  : %d ", getpid());
        signal(SIGINT, handle_sigint);
        while (1)
            ;
    }
    printf(" End");
    return 0;
}
