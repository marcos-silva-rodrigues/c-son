#include <iostream>
#include <string>

using namespace std;

class Book {
  private:
    int pages;
    string title;
  public:
    void setTitle(string _title) {
      title = _title;
    }
    string getTitle() {
      return title;
    }
    void setPages(int _pages) {
      pages = _pages;
    }
    int getPages() {
      return pages;
    }

};

int main () {

  Book son;
  son.setTitle("C++");
  son.setPages(123);

  cout << son.getPages() << son.getTitle() << endl;
  return 0;
}