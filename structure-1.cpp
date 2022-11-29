#include <iostream>
using namespace std;

int main() {
  int a, b;
  float c;
  char d;
  d = 'h';
  // a = 1;
  // cout << a << b << endl;
  // cout << a << endl;
  // cout << c << endl;
  // cout << d << endl;
  // cout << sizeof c << endl;
  // cout << sizeof d << endl;
  a = 0;
  // if( 1<a && a<9 ) {
  //   cout << "1<a<9" << endl;
  // } else {
  //   cout << "false" << endl;
  // }
  1<a && a>9 ? cout << "1<a<9" << endl : cout << "false" << endl;
  b = 10;
  c = 3.9415926;
  b = b + c;
  cout << b << endl;
  int e = 5;
  // e = e++;
  e = ++e;
  // e = e = e + 1;
  cout << e << endl;
  int a1 = 8, b1 = 3;
  double c1;
  c1 = static_cast< double > (a1) / b1;
  cout << "c1: " << c1 << endl;
  return 0;
}
