#include <stdio.h>
#include <conio.h>
void subset(int n, int d, int w[])
{
    int s = 0, k = 1, i, x[10];
    for (i = 1; i <= n; i++)
        x[i] = 0;
    x[k] = 1;
    while (1)
    {
        if (k <= n && x[k] == 1)
        {
            if (s + w[k] == d)
            {
                printf("\nSolution is:\n");
                for (i = 1; i <= n; i++)
                {
                    if (x[i] == 1)
                        printf("%d ", w[i]);
                }
                x[k] = 0;
            }
            else if (s + w[k] < d)
            {
                s = s + w[k];
            }
            else
            {
                x[k] = 0;
            }
        }
        else
        {
            k--;

            while (k > 0 && x[k] == 0)
            {
                k--;
            }
            if (k == 0)
            {
                break;
            }
            x[k] = 0;

            s = s - w[k];
        }
        k++;
        x[k] = 1;
    }
}

int main()
{
    int n, i, d, w[10], sum = 0;
    printf("Enter value of n:");
    scanf("%d", &n);
    printf("\nEnter the set in ascending order:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    printf("\nEnter maximum value d:");
    scanf("%d", &d);
    for (i = 1; i <= n; i++)
        sum += w[i];
    if (sum < d || w[1] > d)
        printf("\nNo solution !!!");
    else
        subset(n, d, w);
    return 0;
}