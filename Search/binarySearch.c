#include <stdio.h>

int search(int arr[], int item, int n){
  int beg = 0;
  int end = n - 1;
  while (beg <= end) {
    int mid = (beg + end) / 2;
    if (arr[mid] < item){
      beg = mid + 1;
    }
    else if (arr[mid] > item){
      end = mid - 1;
    }
    else {
      return (mid + 1);
    }
  }
  return -1;
}

void display(int arr[], int size){
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {
  int arr[] = {2, 4, 7, 8, 9, 10};
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
