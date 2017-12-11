/*
 * A Doubly Linked List implemetation
 */
#include <stdio.h>
#include <stdlib.h>


struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
};

struct Node *head = NULL;   //global head variable that points to the starting node

void display(){
  //Display the linked list.
  struct Node *ptr = head;
  printf("List: ");
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void insertBeg(int n){
  //Insert at the beginning of the linked list
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  if(head == NULL){
    temp->prev = NULL;
    temp->next = NULL;
    head = temp;
    return;
  }
  head->prev = temp;
  temp->next = head;
  head = temp;
}

void insertEnd(int n){
  //Insert at the end of the linked list
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  if(head == NULL){
    temp->next = NULL;
    temp->prev = NULL;
    head = temp;
    return;
  }
  struct Node *ptr = head;
  while(ptr->next != NULL){
    ptr = ptr->next;
  }
  ptr->next = temp;
  temp->prev = ptr;
  temp->next = NULL;
}

int main(void){
  insertBeg(2);
  insertBeg(5);
  insertEnd(4);
  display();
}
