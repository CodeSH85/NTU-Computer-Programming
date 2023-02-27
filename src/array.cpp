#include <iostream>
#include <iomanip>
using namespace std;

void modifyArray( int [], int );
void modifyElement( int );

int main() {

  const int arraySize = 5;
  int a[ arraySize ] = { 0, 1, 2, 3, 4 };

  // int b[5] = { 0, 1, 2, 3 ,4 };
  // int c[] = { 1, 2, 3, 4 };
  // int b[5] = {0};
  // cout << a[9] << endl;
  // cout << b[4] << endl;
  // cout << c[1*2] << endl;
  // cout << c[1] * c[2] << endl;

  cout << "Effects of passing entire array by reference:"
  << "\n\nThe values of the original array are:\n";

  for( int i = 0; i < arraySize; i++ ){
    cout << setw( 3 ) << a[i];
  }
  cout << endl;

  modifyArray( a, arraySize );
  cout << "The Value of the modified array are: \n";
  
  for( int j = 0; j < arraySize; j++) {
    cout << setw( 3 ) << a[j];
  }


  cout << "\n\n\nEffects of passing array element by value:"
  << "\n\na[3] before modifyElement: " << a[ 3 ] << endl;

  modifyElement( a[ 3 ] ); // pass array element a[ 3 ] by value
  cout << "a[3] after modifyElement: " << a[ 3 ] << endl;

}

void modifyArray( int a[], int sizeOfArray ) {
  for( int k = 0; k < sizeOfArray; k++ ){
    a[k] *= 2;
  }
}

void modifyElement( int e ) {
  cout << "Value of element in modifyElement: " << ( e *= 2 ) << endl;
}
