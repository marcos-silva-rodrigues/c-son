#include <stdio.h>
#include <string.h>

typedef struct Book {
  char title[80];
  char author[50];
  int pages;
} Book;

int main () {

  Book book1;

  typedef int myInt;

  myInt a = 500;

  printf("%d \n", a);

  strcpy(book1.title, "C programming");
  strcpy(book1.author, "Author 1");
  book1.pages = 130;


  printf("Title: %s \n", book1.title);
  printf("Author: %s \n", book1.author);
  printf("Pages: %d \n", book1.pages);

  return 0;
}