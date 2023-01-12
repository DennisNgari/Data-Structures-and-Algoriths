#include <stdio.h>


/**
 * main - Insert a new element in an array at a certain position in an array thats already full.
 *
 * Description: Create a new array of size 1 greater than the size of the original array
 * Copy everything up to (position -1 ) and paste it to the new array
 * Insert the new element at the given position 
 * Copy the rest of the elements of the previous array to the new array 
 *
 * Return: Always 0 (Success)
 */


void add_at_pos(int arr[], int arr2[], int size, int data, int pos)
{
    int i, j;

    int index = pos-1 ;


    for(i=0; i<=index-1; i++){
        arr2[i] = arr[i];
    }
    arr2[pos-1] = data;

    for(i=index +1, j=index; i<size+1, j<size; i++, j++){
        arr2[i] = arr[j];
    }
}


int main()
{
    int arr[] = {2,34,41,6,7,8,90,67,23,39};
    int i, data = 78, pos=5;

    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size+1];


    // fn. to insert
    add_at_pos(arr, arr2, size, data, pos);


    for(i=0; i<size+1; i++){
        printf("%d\t", arr2[i]);
    }
    printf("\n");
}