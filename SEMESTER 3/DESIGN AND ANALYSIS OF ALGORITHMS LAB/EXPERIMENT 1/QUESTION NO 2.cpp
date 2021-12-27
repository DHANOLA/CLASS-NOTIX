#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    double time_spent = 0.0;

    clock_t begin = clock();
    int search, c, n = 6;
    int arr[] = {12, 35, 69, 74, 165, 54};
    search = 165;
    for (c = 0; c < n; c++)
    {
        if (arr[c] == search)
        {
            printf("%d is present at location %d.\n", search, c + 1);
            break;
        }
    }
    if (c == n)
        printf("%d isn't present in the array.\n", search);

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}