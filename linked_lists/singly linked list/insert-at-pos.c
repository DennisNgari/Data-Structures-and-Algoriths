#include <stdio.h>
#include <stdlib.h>


/**
 * main - Inserting a node at a given position in a singly linked list.
 *
 * Description: Adding a function that inserts a node at a specific position
 * of a singly linked list
 *
 * Return: Always 0 (Success)
 */

struct node{
    int data;
    struct node *next;
};


// Funct: To add a new node between the second and the third node. 
void add_node_at_pos(struct node *head, int pos, int data){

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = NULL;


    int i;
    pos--;
    
    while(pos != 1){
        ptr = ptr -> next;
        pos--;
    }

    temp -> next = ptr -> next;
    ptr -> next = temp;

}



int main(){

// Create three nodes.
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
    current -> data = 35;
    current -> next = NULL; 
    head -> next -> next = current;
//End

    int pos = 3, data = 56;

    add_node_at_pos(head, pos, data);






    // loop through the list to see the values in the list.
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

}

