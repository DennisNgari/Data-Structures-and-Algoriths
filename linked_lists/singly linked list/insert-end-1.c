#include <stdio.h>
#include <stdlib.h>


/**
 * main - Inserting a new node at the end of a singly linked list
 *
 * Description: method one involves adding a function that loops through the list and adds
 * a node at the end of the list. Time complexity O(n).
 *
 * Return: Always 0 (Success)
 */

struct node{
    int data;
    struct node *next;
};


// Method 1: To add a node at the end of a list. O(n).
void add_at_end(struct node *head, int data){
    
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = NULL;

    while(ptr -> link != NULL){
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}

int main(){

// Creating nodes to test.
    struct node *head = malloc(sizeof(struct node));

    head -> data = 45;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> next = NULL;
    head -> next = current;

    current = malloc(sizeof(struct node));
    current -> data = 56;
    current -> next = NULL;
    head -> next -> next = current;

// End..
    

// Calling the fn. to add
    add_at_end(head,67);
}

