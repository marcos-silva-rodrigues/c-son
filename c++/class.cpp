#include <iostream>
#include <string>

using namespace std;

class Person {
  public:
    double height;
    int age;
    string name;

    Person() {
      cout << "constructor";
    }

    void say() {
      cout << "Say method";
    }

};

int main () {
  Person fulano;

  fulano.age = 21;
  fulano.name = "Fulano";
  fulano.height = 1.70;


  cout << fulano.name << fulano.height << fulano.age << endl;

  fulano.say();
  return 0;
}