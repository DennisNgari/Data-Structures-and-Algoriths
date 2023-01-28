#include <stdio.h>

/**
 * main - Test insertin sort algorithm 
 *
 * Description: The procedure takes a single argument, ‘A’, which is a list of sortable items.
* The variable ‘n’ is assigned the length of the array A.
* The outer for loop starts at index ‘1’ and runs for ‘n-1’ iterations, where ‘n’ is the length of the array.
* The inner while loop starts at the current index i of the outer for loop and compares each element to its left neighbor. If an element is smaller than its left neighbor, the elements are swapped.
* The inner while loop continues to move an element to the left as long as it is smaller than the element to its left.
* Once the inner while loop is finished, the element at the current index is in its correct position in the sorted portion of the array.
* The outer for loop continues iterating through the array until all elements are in their correct positions and the array is fully sorted.
 *
 * Return: Always 0 (Success)
 */


void insertion_sort(int arr[], int n)
{
    int i, j,temp;

    // Loop through different passes 
    for (i=1; i<n;i++){

        temp = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    
}


int main ()
{
    int arr[] = {78, 34, 56, 11, 16, 4, 19, 23, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr, n);

        // Print the sorted values 
    int i;
    for (i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}