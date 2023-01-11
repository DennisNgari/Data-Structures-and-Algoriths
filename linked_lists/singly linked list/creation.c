#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};


int main(){

    //To access the address of the first node, the head pointer is created.
    struct node *head = malloc(sizeof(struct node));
    printf("The Head pointer points to address: %p\n", head);

    //Initialize data of the first node.
    head -> data = 45;
    head -> next = NULL; 

    //Initialize the second node 
    struct node *current = malloc(sizeof(struct node));
    printf("The current pointer points to address: %p\n", current);

    current -> data = 98;
    current -> next = NULL;
    head -> next = current; 

    //Adding the third node
    free(current);
    current = malloc(sizeof(struct node));
    printf("The current pointer now points to address: %p\n", current);
    current -> data = 3;
    current -> next = NULL; 
    head -> next -> next = current;

    


    return 0;
}