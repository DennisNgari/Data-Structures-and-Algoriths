#include <stdio.h>
#include <stdlib.h>


/**
 * main - Inserting a node at the end of a singly linked list.
 *
 * Description: Adding an optimized function that adds a node at the end of 
 * of a singly linked list without necessarily looping in through. O(1)
 *
 * Return: Always 0 (Success)
 */

struct node{
    int data;
    struct node *next;
};

// Method: 2 function to reduce the time complexity
struct node * add_at_end(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;
    ptr -> next = temp;

    return temp;
}


int main(){

// Creating nodes.
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;

    struct node *ptr = head;
    ptr = add_at_end(ptr, 67);
    ptr = add_at_end(ptr, 100);
    ptr = add_at_end(ptr, 50);
    ptr = add_at_end(ptr, 13);

    // Loop through to see the nodes
    ptr = head;

    if(head == NULL){
        printf("List is empty\n");
    }


    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }



    


}

