#include <stdio.h>

int stack[3];
int capacity = 3;
int top = -1;

void push(int n){
  if (top == capacity -1){
    printf("Stack Overflow\n");
    return;
  }
  stack[++top] = n;
}

int pop(){
  if (top == -1){
    printf("Stack Underflow ");
    return -1;
  }
  return stack[top--];
}

int main(int argc, char const *argv[]) {
  printf("--PUSHING TO STACK--\n");
  push(1);
  push(2);
  push(3);
  push(4);
  printf("\n--POPPING FROM STACK--\n");
  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());
  return 0;
}
