#include <stdio.h>

/**
 * main - Test the selection sort 
 *
 * Description: Initialize minimum value(min_idx) to location 0.
* Traverse the array to find the minimum element in the array.
* While traversing if any element smaller than min_idx is found then swap both the values.
* Then, increment min_idx to point to the next element.
* Repeat until the array is sorted.
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


// Function to traverse the list
void selectionSort(int arr[], int n)
{
    int min_idx, i, j;

    // one by one move boundary of unsorted array
    for(i = 0; i < n-1; i++){

        // Traverse to find the minimum element of the array
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
            if(min_idx != i){
                swap(&arr[min_idx], &arr[i]);
            }

    }

}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);

    // Print the sorted values 
    int i;
    for (i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    
}