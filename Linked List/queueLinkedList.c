#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void display(){
  printf("Queue: ");
  struct Node *ptr = front;
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

void insert(int n){
  struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
  temp->data = n;
  temp->next = NULL;
  if(front == NULL && rear == NULL){
    front = temp;
    rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}

int delete(){
  if (front == NULL){
    printf("Queue Underflow ");
    return -1;
  }
  struct Node *temp = front;
  int item = front->data;
  front = front->next;
  free(temp);
  return item;
}

int main(){
  insert(2);
  insert(3);
  insert(4);
  display();
  printf("Deleted %d \n", delete());
  display();
  printf("Deleted %d \n", delete());
  display();
  printf("Deleted %d \n", delete());
  display();
  printf("Deleted %d \n", delete());

}
