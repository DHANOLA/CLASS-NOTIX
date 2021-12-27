#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    printf("\n 2 + 4 = ");
    printf("\t(Wait for 5 seconds before giving output)\t");
    sleep(5);
    printf("6\n");
    return 0;
}
