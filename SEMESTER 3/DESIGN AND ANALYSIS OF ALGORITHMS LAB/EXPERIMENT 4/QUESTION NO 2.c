#include <stdio.h>
#include <conio.h>
int knapsack(int cap, int n, int w[10], int v[10], int V[10][10])
{
    int i, j;
    for (i = 0; i <= n; i++)
        for (j = 0; j <= cap; j++)
        {
            if (i == 0)
            {
                V[i][j] = 0;
            }
            else if (j == 0)
            {

                V[i][j] = 0;
            }
            else
            {
                if (j - w[i] < 0)
                {
                    V[i][j] = V[i - 1][j];
                }
                else
                {
                    V[i][j] = (V[i - 1][j] > v[i] + V[i - 1][j - w[i]]) ? V[i - 1][j] : v[i] + V[i - 1][j - w[i]];
                }
            }
        }

    return V[n][cap];
}
int main()
{
    int n, i, j, count = 0, w[10], v[10], cap, maxprofit, V[10][10], sol[10];
    printf("Enter number of items:");
    scanf("%d", &n);
    printf("\nEnter respective weights:");
    for (i = 1; i <= n; i++)
        scanf("%d", &w[i]);
    printf("\nEnter respective profits/values:");
    for (i = 1; i <= n; i++)
        scanf("%d", &v[i]);
    printf("\nEnter capacity:");
    scanf("%d", &cap);
    maxprofit = knapsack(cap, n, w, v, V);
    printf("\nThe table would be: \n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= cap; j++)
            printf("%d\t", V[i][j]);
        printf("\n");
    }
    j = n;
    i = 0;
    while (cap >= 0)
    {
        if (V[j][cap] != V[j - 1][cap])
        {
        }
        else
        {
        }
        sol[i++] = j;
        cap = cap - w[j];
        sol[i++] = j - 1;
        cap = cap - w[j - 1];
        count++;
        j--;
        if (j - 1 == 0)
            break;
    }
    printf("\nMaximum profit is: %d", maxprofit);
    printf("\nThe solution set is : ");
    for (i = count - 1; i >= 0; i--)
        printf("%d \t", sol[i]);
    return 0;
}