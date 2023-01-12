#include <stdio.h>
#include <stdlib.h>


/**
 * main - Inserting a node at the beginning of a singly linked list.
 *
 * Description: Adding a function that inserts a node at the beginning 
 * of a singly linked list using double pointers.
 *
 * Return: Always 0 (Success)
 */

struct node{
    int data;
    struct node *next;
};


// Method 2. add node at the beginning 
void add_beg(struct node **head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;

    ptr -> next = *head;
    *head = ptr;

}



int main(){

    // Creating nodes.
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;

    // Second node
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = 98;
    ptr -> next = NULL;

    head -> next = ptr;
    

    // In the fxn, head is the address of the first node.
    add_beg(&head, 64);


    // After inserting the values, make the head point to the ptr
    ptr = head;

    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

}

