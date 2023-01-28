#include <stdio.h>

/**
 * main - Test merge sort algorithm 
 *
 * Description: Declare array and left, right, mid variable
 ** perform merge function.
 ** if left > right
 **    return
 ** mid= (left+right)/2
 ** mergesort(array, left, mid)
 ** mergesort(array, mid+1, right)
** merge(array, left, mid, right)

 *
 * Return: Always 0 (Success)
 */


// Create the two subarrays to merge
// First subarray is arr[l...m]
// Second subarray is from arr[m+1 .... r]
void merge_sort(int arr[], int l, int m, int r)
{
    int i, j, k;

    //find the length of the right and left subarrays
    int left_length = m - l + 1; // subtraction comes before addition
    int right_length = r - m;

    // Create temp arrays 
    int temp_left[left_length];
    int temp_right[right_length];


    // Copy the left and right arrays 
    for (i = 0; i < left_length; i++){
        temp_left[i] = arr[l + i];
    }

    for (i = 0; i < right_length; i++){
        temp_right[i] = arr[m + 1 + i];
    }


    // Merge the two sorted subarrays
    i = 0; //initial index of the left subarray
    j = 0; //initial index of the right subarray
    k = l; //initial index of the merged subarray
    while( i < left_length && j < right_length){
        if(temp_left[i] <= temp_right[j]){
            arr[k] = temp_left[i];
            i++, k++;
        }
        else{
            arr[k] = temp_right[j];
            j++, k++;
        }
    }

    // copy the remaining elements if left_temp if any.
    while(i < left_length){
        arr[k] = temp_left[i];
        i++, k++;
    }
    // copy the remaining elements of right_temp if any.
    while(j < right_length){
        arr[k] = temp_right[j];
        j++, k++;
    }

    // Merge the two sorted subarrays 
    // for (i = 0, j = 0, k = l; k <= r; k++)
    // {
    //     if((i < left_length) && (j >= right_length || temp_left[i] <= temp_right[j]))
    //     {
    //         arr[k] = temp_left[i];
    //         i++;
    //     }
    //     else{
    //         arr[k] = temp_right[j];
    //         j++;
    //     }
    // }
}

// merge_recursion function. 
// This function subdivided the array until the array is exhauseted i.e l !< r
void merge_recursion(int arr[], int l, int r)
{
    // Check if the left index of the array is less than the right index.
    if(l < r){
        // calculate the midpoint
        int m = l + (r - l) / 2;

        // Subdivide the left and right subarrays recursively
        merge_recursion(arr, l, m);
        merge_recursion(arr, m + 1, r);

        // Sort the subarrays for merging 
        merge_sort(arr, l, m, r);
    }



}

int main()
{
    int arr[] = {78, 34, 56, 11, 16, 4, 19, 23, 11};
    int size = sizeof(arr)/ sizeof(arr[0]);
    int l = 0, r = size - 1;

    merge_recursion(arr, l, r);

    // Print the sorted values 
    int i;
    for (i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}