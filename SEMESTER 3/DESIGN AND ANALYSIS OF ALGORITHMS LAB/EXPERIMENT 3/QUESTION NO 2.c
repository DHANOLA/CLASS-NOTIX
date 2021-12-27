#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>
int main()
{
    int a[1000], n, i, item, j;
    clock_t start, end;
    float time;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("\nRandomly generated array elements are:\n");
    for (i = 0; i < n; i++)
    {
        a[i] = (int)rand() % 100;
        printf("%d ", a[i]);
    }
    start = clock();
    for (i = 1; i < n; i++)
    {
        item = a[i];
        for (j = i - 1; j >= 0 && item < a[j]; j--)
            a[j + 1] = a[j];
        a[j + 1] = item;
    }
    end = clock();
    printf("\nSorted list is:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    time = (float)(end - start) / CLK_TCK;
    printf("\nTime taken = %f", time);
    return 0;
}