#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
  char title[80];
  int pages;
} Book;

void add(Book books[], int *id);
void display(Book book[], int *id);

int main () {

  int op;
  int id = 0;
  Book books[20];

  do {
    printf("1 - new \n");
    printf("2 - Display all \n");
    printf("0 - exit \n");
    scanf("%d", &op);
  
    switch (op) {
      case 1:
      add(books, &id);
      break;
      case 2:
      display(books, &id);
      break;
      default:
        exit(0);
      break;
    }
  } while(op != 0);


  return 0;
}

void add(Book books[], int *id) {
  printf("New Record \n");

  printf("Title book: \n");
  scanf("%s", &books[*id].title);
  printf("Pages: \n");
  scanf("%d", &books[*id].pages);

  *id++;
};

void display(Book books[], int *id) {
  for (int i = 0; i <= *id; i++) {
    printf("Title book: %s \n", books[i].title);
    printf("Pages: %d \n", books[i].pages);
  }
};