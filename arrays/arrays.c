#include <stdio.h>
#include "main.h"
/**
 * main - Print the elements of an array
 *
 * Description: function that initializes the values of an array from
 * user input 
 *
 * Return: Always 0 (Success)
 */

int main(void){
    // print_array();
    // print_sum_and_avg();
    // largest_number();
    // read_two_arrays();
    // initialize_2d_runtime();
    // print_2D_array_and_sum();
    // transpose_matrix();
    // print_sum_of_individual_rows_and_columns();
    // print_sum_of_two_matrix_and_save_result();
    // matrix_multiplication();
    // remove_duplicates();
    // insert_element_in_sorted_array();
    // insert_elements_unsorted_array();
    find_size_of_array();
    
    

    
    return (0);
}


//Print an array using user input 
void print_array(void){
    int a[5];
    int i;

    printf("Enter the elemets of an array: \n");
    for( i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    int length = sizeof(a)/sizeof(a[0]);    
        
    printf("Elements of given array: \n");    
    //Loop through the array by incrementing value of i     
    for (int j = 0; j < length; j++) {     
        printf("%d ", a[j]);     
    }  
}

//Find the size of an array
void find_size_of_array(void){



    int arr[10] = {17, 13, 13, 15, -2, 20}; 
    int i;

    printf("Size of arr array is: %lu \n",sizeof(arr));
    printf("Size variable int: %lu \n",sizeof(arr[0]));
    printf("********\n");
    size_t n = sizeof(arr)/sizeof(int);

    printf("Address of the array is: %p\n",arr);
    printf("Address of first element of the array is: %p\n",&arr[0]);
    printf("Value of arr[0]: %d\n", *arr);

    for(i = 0; i < n; i++){
        printf("%d: %d\n", i, arr[i]);
    }
}


// Find the sum and average of an array.
void print_sum_and_avg(void){
    int k[10];
    int sum = 0, i;
    float avg;

    for(i = 0; i < 10; i++){
        scanf("%d", &k[i]);
    }

    for(i = 0; i < 10; i++){
        sum = sum + k[i];
    }

    avg = sum/10;
    printf("sum = %d, Average = %f", sum, avg);
}


// Find the largest number in an array.

void largest_number(void){
    int numbers[10] = {0, 13, 13, 15, -2, 20};
    int max, i;
    max = numbers[0];
    

    for (i = 0; i < 10; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }

    printf("max: %d\n", max);
}


//program to read two arrays and store the sum of these arrays.

void read_two_arrays(void){
    int arr1[10], arr2[10], sumarr[10], i;

    printf("Enter array 1\n");
    for( i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter array 2\n");
    for( i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for( i = 0; i < 10; i++)
    {
        sumarr[i] = arr1[i] + arr2[i];
        printf("Sum at index %d, is: %d\n", i, sumarr[i]);
    }
}

//Write a program to initialize a 2-D array at runtime.

void initialize_2d_array_runtime(void){
    int a[2][3];
    int i,j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n", a[0][1]);
}

// Write a program to print a 2D array and calculate the sum;
void print_2D_array_and_sum(void){
    int a[2][3];
    int i,j, sum = 0;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");

    
    for (i = 0; i < 2;i++)
    {
        for (j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }

        printf("Sum of the matrix is: %d\n", sum);

}

//Write a program to print the transpose of a matrix.
void transpose_mattrix(void){

int a[2][3] = {{1,2,3},{4,5,6}};
int t[3][2];
int i, j;

for (i = 0; i < 3; i++){
    for (j = 0; j < 2; j++){
        t[i][j] = a[j][i];
    }
}

for (i = 0; i < 3; i++){
    for (j = 0; j < 2; j++){
    printf("%d\t", t[i][j]);
    }
    printf("\n");
}

}

// write a program to print the sum of individual rows and columns of a matrix.
void print_sum_of_individual_rows_and_columns(void){
    
    int a[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};
    int i, j;

    for(i = 0; i < 2; i++){
        int sumRow = 0, sumCol = 0;
        for (j = 0; j < 3; j++){
            sumRow = sumRow + a[i][j];
            sumCol = sumCol + a[j][i];
        }

        printf("sum of rows: %d\n", sumRow);
        printf("sum of cols: %d\n", sumCol);
    }

}

// Write a program to print the sum of two matrix and save the reusult
// in onother matrix.

void print_sum_of_two_matrix_and_save_result(void){
    
    int a[2][3] = {{12,33,-16},{11,15,29}};
    int b[2][3] = {{5,-3,45},{13,77,23}};
    int c[2][3];
    int i, j;

    while(i < 2){
        for (j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
        i++;
    }
}

// Multiply two matrices and save the output in onother matrix.
void matrix_multiplication(void){
    int a[3][3] = {{1, 5, 6},{2, 2, 5},{1, 7, 5}};
    int b[3][3] = {{1, 2, 3},{0, 1, 5},{1, 0, 2}};
    int c[3][3], i, j, k;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            int sum = 0;

            for(k = 0; k < 3; k++){
                sum = sum + a[i][k] * b[k][j];

            }

            c[i][j] = sum;
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}


// Write a program to inserts elements in a sorted array.(Time complexity 0(n-p))
void insert_element_in_sorted_array(void){
    int arr[50],size, i, pos, num;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nInitial: \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Enter the position to insert element: \n");
    scanf("%d", &pos);
    printf("Enter element to insert: \n");
    scanf("%d", &num);
    for(i = size - 1; i >= pos -1; i--){
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;
    size++;

    printf("\nModified. \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

}

// Inserting elements in an unsorted array. Time complexity 0(1)
void insert_elements_unsorted_array(void){
    int arr[50],size, i, pos, num;

    printf("Enter the size of the array: \n");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nInitial: \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

    printf("Enter the position to insert element: \n");
    scanf("%d", &pos);
    printf("Enter element to insert: \n");
    scanf("%d", &num);
    arr[size] = arr[pos-1];
    arr[pos - 1] = num;
    size++;

    printf("\nModified. \n");
    for(i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");

}




