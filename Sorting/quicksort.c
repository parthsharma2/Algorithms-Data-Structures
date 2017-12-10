#include <stdio.h>


int partition(int arr[], int start, int end){
  int pivot = arr[end];
  int pIndex = start;
  for (int i = start; i < end; i++){
    if (arr[i] <= pivot){
      int temp = arr[i];
      arr[i] = arr[pIndex];
      arr[pIndex] = temp;
      pIndex++;
    }
  }
  int temp = arr[pIndex];
  arr[pIndex] = arr[end];
  arr[end] = temp;
  return pIndex;
}

void quicksort(int arr[], int start, int end){
  if (start < end){
    int pIndex = partition(arr, start, end);
    quicksort(arr, start, pIndex - 1);
    quicksort(arr, pIndex + 1, end);
  }
}

void display(int arr[], int n){
  for (int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Unsorted Array: \n");
  display(arr, n);
  quicksort(arr, 0, n - 1);
  printf("Sorted Array: \n");
  display(arr, n);
  return 0;
}
