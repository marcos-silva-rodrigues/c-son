#include <iostream>

using namespace std;

int main() {

  char str[50] = "Fulano Silva";
  int age = 0;

  cout << "Whats is your name: " << endl;
  cin >> str;

  cout << "How old are you: " << endl;
  cin >> age;

  cout << "You name is: " << str << " and you have: " << age << " years old" << endl;

  // clog << "Error";
  // cerr << "Error";
  return 0;
}