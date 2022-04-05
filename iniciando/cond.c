#include <stdio.h>

int main() {

  int num1, num2;
  char op;
  float result;

  printf("Entre with number One: ");
  scanf("%d", &num1);

  printf("Entre with number Two: ");
  scanf("%d", &num1);

  printf("OP: ");
  scanf("%s", &op);

  switch (op) {
    case '+':
      result = num1 + num2;
    break;
    case '-':
      result = num1 - num2;
    break;
    case '*':
      result = num1 * num2;
    break;
    case '/':
      result = num1 / num2;
    break;
  
  default:
    printf("Method not found");
    return 0;
  } 

  printf("%f", result);
  return 0;
}