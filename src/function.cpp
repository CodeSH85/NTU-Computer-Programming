#include <iostream>
using namespace std;

int square( int );
// function prototype

// int main() {
//   int a = 10;
//   cout << a << " squared: " << square( a ) << endl;
// }

// int square ( int x ) {
//   return x*x;
// }

double maximum( double, double, double );
void test();

int main() {
  double number1, number2, number3;

  cout << "Enter three floating-point numbers: ";
  cin >> number1 >> number2 >> number3;

  cout << "Maximum is: " << maximum(number1, number2, number3) << endl;
  test();
  return 0;
}

double maximum( double x, double y, double z ) {
  double max = x;

  if( y > max ){
    max = y;
  };
  if( z > max ){
    max = z;
  };
  return max;
}

void test() {
  cout << "void function" << endl;
  return;
}
