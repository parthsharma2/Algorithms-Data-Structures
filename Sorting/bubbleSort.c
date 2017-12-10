#include <stdio.h>

void bubbleSort(int arr[], int size){
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-i-1; j++){
      if (arr[j] > arr[j+1]) {
        //Swap the values
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void display(int arr[], int size){
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main(int argc, char const *argv[]) {

  int arr[] = {5,2,4,9,1,3};
  int size = (int) sizeof(arr) / sizeof(arr[0]);
  printf("Unsorted Array: \n");
  display(arr, size);
  printf("Sorted Array: \n");
  bubbleSort(arr, size);
  display(arr, size);

  return 0;
}
