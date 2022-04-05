#include <stdio.h>


int main() {
  int a = 12;
  int b = 3;

  int sum = a + b;
  int sub = a - b;
  int mult = a * b;
  int div = a / b;
  int mod = a % b;



  printf("sum: %d, sub: %d, mult: %d, div: %d, mod: %d \n", sum, sub, mult, div, mod);

  printf("B %d \n", b);
  b++;
  printf("increment %d \n", b);
  b--;
  printf("decrement %d \n", b);


  printf("%d \n", (5 == 5 && 4 == 4));
  printf("%d \n", (5 > 4 || 4 > 3));
  printf("%d \n", !(5 < 4));

  return 0;
}