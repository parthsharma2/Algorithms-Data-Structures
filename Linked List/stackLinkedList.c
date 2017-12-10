#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *top = NULL;

void push(int n){
  struct node *temp = (struct node *) malloc(sizeof(struct node));
  temp->data = n;
  temp->next = top;
  top = temp;
}

int pop(){
  if(top == NULL){
    printf("ERROR: Stack Underflow : ");
    return -1;
  }
  int item = top->data;
  top = top->next;
  return item;
}

void display(){
  struct node *ptr = top;
  while (ptr != NULL) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  push(2);
  push(3);
  display();
  printf("Popped %d\n", pop());
  printf("Popped %d\n", pop());
  printf("Popped %d\n", pop());
  return 0;
}
