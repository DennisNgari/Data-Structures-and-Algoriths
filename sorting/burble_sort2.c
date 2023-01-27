#include <stdio.h>

/**
 * main - Test Burble sort algorithm 
 *
 * Description: The algorithm compares the first two elements, and swaps them 
 * if they are in the wrong order.
 * if the elements are already in order, they are not swapped.
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

 //Funct: To implement burble sort.

void burble_sort(int arr[], int n){
    int i, j;

    for(i = 0; i < n; i++){

        for(j = 0; j < n - 1; j++){
            if( arr[j] > arr[j+1]){
            swap(&arr[j], &arr[j+1]);
            }
        }
    }
}