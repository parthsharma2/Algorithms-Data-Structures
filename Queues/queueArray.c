#include <stdio.h>
#define CAPACITY 10

int queue[CAPACITY];
int front = -1;
int rear = -1;

void insert(int n){
  if ((front == 0 && rear == CAPACITY-1) || (front == rear + 1)){
    printf("\nQueue Overflow");
    return;
  }

  if (front == -1){
    front = 0;
    rear = 0;
  }
  else if (rear == CAPACITY - 1){
    rear = 0;
  }
  else{
    rear++;
  }

  queue[rear] = n;
}

int delete(){
  if (front == -1){
    printf("Queue Underflow");
    return -1;
  }
  int item = queue[front];
  if(front == rear){
    front = -1;
    rear = -1;
  }
  else if(front == CAPACITY - 1){
    front = 0;
  }
  else{
    front++;
  }
  return item;
}

void display(){
  printf("Queue: ");
  for(int i = front; i <= rear; i++)
    printf("%d ", queue[i]);
  printf("\n");
}

int main(){
  insert(2);
  insert(3);
  insert(4);
  display();
  printf("Deleted %d \n", delete());
  printf("Deleted %d \n", delete());
  display();
  printf("Deleted %d \n", delete());
}
