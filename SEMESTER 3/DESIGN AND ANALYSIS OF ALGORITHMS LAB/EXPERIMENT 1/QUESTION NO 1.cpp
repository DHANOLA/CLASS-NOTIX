#include <iostream>
#include <time.h>
using namespace std;
void swapping(int &a, int &b)
{ //swap the content of a and b
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void selectionSort(int *array, int size)
{
    int i, j, imin;
    for (i = 0; i < size - 1; i++)
    {
        imin = i; //get index of minimum data
        for (j = i + 1; j < size; j++)
            if (array[j] < array[imin])
                imin = j;
        //placing in correct position
        swap(array[i], array[imin]);
    }
}
int main()
{
    // to store the execution time of code
    double time_spent = 0.0;

    clock_t begin = clock();
    int i, j, temp, pass = 0;
    int a[10] = {10, 2, 0, 14, 43, 25, 18, 1, 5, 45};
    cout << "Input list ...\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        pass++;
    }
    cout << "Sorted Element List ...\n";
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nNumber of passes taken to sort the list:" << pass << endl;
    int n;
    cout << "Enter the number of elements for selection sort: ";
    cin >> n;
    int arr[n]; //create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    selectionSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}
