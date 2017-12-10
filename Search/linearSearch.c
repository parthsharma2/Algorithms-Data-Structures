#include <stdio.h>

int search(int arr[], int item, int n){
  int pos = -1;
    for (int i = 0; i < n; i++){
      if (arr[i] ==  item){
        pos = i + 1;
        break;
      }
    }
  return pos;
}

void display(int arr[], int size){
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {

  int arr[] = {2, 7, 9, 4, 15, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int item = 0;
  printf("Array: \n");
  display(arr, n);
  printf("Enter item to search: \n");
  scanf("%d", &item);
  int result = search(arr, item, n);
  if (result != -1) {
    printf("Item found at Position %d\n", result);
  }
  else {
    printf("Item doesn't exist\n");
  }
  return 0;
}
