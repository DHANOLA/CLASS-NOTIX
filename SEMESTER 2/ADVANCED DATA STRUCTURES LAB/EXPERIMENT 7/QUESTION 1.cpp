#include <iostream>
using namespace std;

template <typename num>
void bubbleSort(num arr[], int n)
{
    num temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int len = 5;

    float arr2[] = {90.1, 69.678, 81.235, 33.234, 2.234};
    bubbleSort<float>(arr2, len);
    cout << "Sorted:\t";
    for (int x = 0; x < len; x++)
        cout << arr2[x] << " ";
    cout << endl;

    int arr[] = {23, 67, 89, 33, 2};
    bubbleSort<int>(arr, len);
    cout << "Sorted:\t";
    for (int x = 0; x < len; x++)
        cout << arr[x] << " ";
    cout << endl;

    return 0;
}
