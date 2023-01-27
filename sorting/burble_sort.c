#include <stdio.h>
#include "main.h"

/**
 * main - Test sort algorithm 
 *
 * Description: Burble sort algorithm
 *
 * Return: Always 0 (Success)
 */


//Funct: 2 Using callback functions 

int compare(int a, int b){
    if(a > b) return -1;
    else return 1;
}

//Funct: The burble_sort with a callback.
void burble_sort_callback(int a[], int n, int(*compare)(int, int)){
    int i, j, temp;

    for(i = 0; i < n; i++){

        for(j = 0; j < n - 1; j++){
            if(compare(a[j], a[j+1]) > 0){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


int main(){
    int i, arr[] = {3,-22,100,-14,99,4};
    size_t n = sizeof(arr)/sizeof(int);

    //Funct: 1 Use callbacks to print in either ascending or descending order


    burble_sort_callback(arr, n, compare);
    //Print the sorted elements.
    for (i = 0; i < n; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");

}


