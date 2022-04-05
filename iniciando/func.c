#include <stdio.h>

int min(int *num1, int *num2);

int main() {

  int num1, num2;

  printf("Number 1: ");
  scanf("%d", &num1);

  printf("Number 2: ");
  scanf("%d", &num2);

  printf("min: %d", min(&num1, &num2));
  return 0;
}

int min(int *num1, int *num2) {
  int result;
  if (num1 < num2) {
    result = num1;
  } else {
    result = num2;
  }

  return result;
}