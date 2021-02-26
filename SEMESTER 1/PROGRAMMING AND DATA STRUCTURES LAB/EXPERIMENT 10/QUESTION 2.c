// BUBBLE SORT

#include <stdio.h>



void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    

  
  printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}


int main()
{
    int arr[100], i, n, step, temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

  
  for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
  
  
  bubbleSort(arr, n);
  
  
  
    return 0;
} 























// SELE CTION SORT

#include <stdio.h> 




void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 



void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 

		swap(&arr[min_idx], &arr[i]); 
	} 
} 



void printArray(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 



int main() 
{ 
	int arr[] = {64, 25, 12, 22, 11}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	selectionSort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
