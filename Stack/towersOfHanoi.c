#include <stdio.h>

void hanoi(int n, char beg, char aux, char end){
  if(n == 1){
    printf("%c -> %c \n", beg, end);
    return;
  }
  hanoi(n - 1, beg, end, aux);
  printf("%c -> %c \n", beg, end);
  hanoi(n - 1, aux, beg, end);
}

int main(){
  hanoi(3, 'A', 'B', 'C');
  return 0;
}
