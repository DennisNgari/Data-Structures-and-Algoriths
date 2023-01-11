#include <stdio.h>
#include <stdlib.h>


/**
 * main - Traversing a singly linked list
 *
 * Description: Using a while loop to print all the elements of a singly linked list.
 *
 * Return: Always 0 (Success)
 */


struct node{
    int data;
    struct node *next;
};



//Funct: 1. function to traverse a singly linked list.
void print_data(struct node *head){
    
    if(head == NULL){
        printf("Linked list is empty");
    }
    
    // If the head pointer is not empty create a pointer (ptr) and assign it to NULL
    struct node *ptr = NULL;

    //Assign the value of head to ptr (dereferencing)
    ptr = head;

    while(ptr != NULL){
        printf("%d\n", ptr -> data);

        //Free the previous memory of ptr and assign a new one 
        ptr = ptr -> next;
    }
}



int main(){  

    struct node *head = malloc(sizeof(struct node));


    //Initialize data of the first node.
    head -> data = 45;
    head -> next = NULL; 

    //Initialize the second node 
    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> next = NULL;
    head -> next = current; 

    //Adding the third node
    current = malloc(sizeof(struct node));
    current -> data = 38;
    current -> next = NULL; 
    head -> next -> next = current;

    print_data(head);


    return 0;

}

