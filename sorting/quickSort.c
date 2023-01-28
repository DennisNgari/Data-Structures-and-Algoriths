#include <stdio.h>

/**
 * main - Test quick sort algorithm 
 *
 * Description: Quick sort algorithm
 *
 * Return: Always 0 (Success)
 */


// Function to swap the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Partition function to align the pivot element
int partition(int arr[], int lb, int ub)
{
    // Let the first element be the pivot
    int pivot = arr[lb];
    int start = lb + 1;
    int end = ub;
    while (start < end)
    {
        while(arr[start] <= pivot){
            start++;
        }
        while(arr[end] > pivot){
            end--;
        }

        if (start <= end){
            swap(&arr[start], &arr[end]);
        }
        
    }
    
    swap(&arr[lb], &arr[end]);
    return (start);
    
}

// Function to handle the sorting using recursion
void quickSort(int arr[], int lb, int ub)
{
    if(lb <  ub)
    {
        int p = partition(arr, lb,ub);
        quickSort(arr, lb, p-1);
        quickSort(arr, p+1, ub);
    }
}

int main()
{
    int arr[] = {15, 34, 56, 11, 16, 4, 19, 23, 11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int lb = 0, ub = size - 1;

    quickSort(arr, lb, ub);

    // Print the sorted values 
    int i;
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
