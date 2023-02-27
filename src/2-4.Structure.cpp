#include <iostream>
using namespace std;

struct Person {
  string name;
  string job;
  int age;
  float height;
};

int main() {
  Person Saul = {
    "Saul", "lawyer", 52, 1.88
  };
  cout << Saul.name << endl;
};
