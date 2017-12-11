#include <stdio.h>
#include <stdlib.h>


struct Node{
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void display(){
  struct Node *ptr = head;
  while (ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void insertEnd(int n){
  struct Node *ptr = head;
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  temp->next = NULL;
  if (ptr == NULL){
    head = temp;
  }
  else{
    while(ptr->next != NULL){
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}

void insertBeg(int n){
  struct Node *ptr = head;
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  if(ptr == NULL){
    temp->next = NULL;
    head = temp;
  }
  else{
    temp->next = ptr;
    head = temp;
  }
}

void insert(int n, int pos){
  struct Node *ptr = head;
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  if(n == 1){
    temp->next = head;
    head = temp;
    return;
  }
  for(int i = 0; i < n - 2; i++){
    ptr = ptr->next;
  }
  temp = ptr->next;
  ptr->next = temp;
}

int main(int argc, char const *argv[]) {
  insertEnd(2);
  insertEnd(4);
  insertBeg(3);
  insertBeg(5);
  insertBeg(8);
  insert(10, 3);
  display();
  return 0;
}
