#include <stdio.h>
#include <stdlib.h>


/**
 * main - Inserting a node at the beginning of a singly linked list.
 *
 * Description: Adding a function that inserts a node at the beginning 
 * of a singly linked list
 *
 * Return: Always 0 (Success)
 */

struct node{
    int data;
    struct node *next;
};


// Function add node at the beginning 
struct node *add_beg(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;

    ptr -> next = head;
    head = ptr;

    return head;

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
    

    // in the fxn, head is the address of the first node.
    head = add_beg(head, 64);
    head = add_beg(head, 70);
    head = add_beg(head, 56);
    head = add_beg(head, 99);


    // After inserting the values, make the head point to the ptr
    head = ptr;

    if(head -> next == NULL){
        printf("head: %d\n", head->data);
    }
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

}

