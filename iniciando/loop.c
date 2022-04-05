#include <stdio.h>

int main() {

  int counter = 0;

  printf("Insert counter time: ");
  scanf("%d", &counter);

  // while (con < counter) {
  //   printf("Value: %d \n", con);
  //   con++;
  // }

  // do {
  //   printf("Value: %d \n", con);
  //   con++;
  // } while(con < counter);

  for (int con = 0; con < counter; con++) {
    printf("Value: %d \n", con);
  }

  return 0;
}