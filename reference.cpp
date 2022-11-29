#include <iostream>
using namespace std;

int squareByValue( int );  
void squareByReference( int & );

int main() {
  int x = 10;
  // int &y = x; // y refers to (is an alias for) x
  // cout << "x = " << x << endl << "y = " << y << endl;
  // y = 20;
  // cout << "x = " << x << endl << "y = " << y << endl;

  int z = 4;

  cout << "x = " << x << " before squareByValue\n";
  cout << "Value returned by squareByValue: " << squareByValue( x ) << endl;
  cout << "x = " << x << " after squareByValue\n" << endl;

  cout << "z = " << z << " before squareByReference\n";
  squareByReference( z );
  cout << "z = " << z << " after squareByReference\n" << endl;
}

int squareByValue( int number ) {
  return number *= number;
}

void squareByReference( int &numberRef ) {
  numberRef *= numberRef;
}
