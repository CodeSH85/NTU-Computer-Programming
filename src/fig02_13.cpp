#include <iostream>

using namespace std;

int main(void) {
  int num1;
  int num2;

  cout << "Enter two integers to compare:\n";
  cout << "Enter first integer: ";
  cin >> num1;
  cout << "Enter second integer: ";
  cin >> num2; 

  if( num1 == num2 ){
    cout << num1 << " == " << num2 << endl;
  }
  if( num1 != num2 ){
    cout << num1 << " != " << num2 << endl;
  }
  if( num1 < num2 ){
    cout << num1 << " < " << num2 << endl;
  }
  if( num1 > num2 ){
    cout << num1 << " > " << num2 << endl;
  }
  if( num1 <= num2 ){
    cout << num1 << " <= " << num2 << endl;
  }
  if( num1 >= num2 ){
    cout << num1 << " >= " << num2 << endl;
  }
}
