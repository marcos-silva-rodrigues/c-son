#include <stdio.h>

float average(float arr[], int size);

int main() {

  int size;

  printf("Size of array: ");
  scanf("%d", &size);

  float arr[size];
  
  for (int i = 0; i < size; i++) {
    printf("Enter a number: ");
    scanf("%f", &arr[i]);
  }

  int average_result = average(arr, size);
  printf("Average: %d \n", average_result);

  return 0;
}

float average(float arr[], int size) {
  float sum = 0;

  for (int i = 0; i < size; i++) {
    // printf("%d %.2f \n", i, arr[i]);
    sum += arr[i];
  }

  return sum / size;
}