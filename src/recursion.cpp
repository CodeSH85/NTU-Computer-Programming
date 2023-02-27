#include <iostream>
using namespace std;

int F( int );
int step( int );

int main() {
  int n;
  cout << "enter a integer: " << endl;
  cin >> n;
  cout << step( n ) << endl;
  return 0;
}

// int F( int n ) {
//   int tmp = 1;
//   for( int i = n; i >= 1; i-- ){
//     tmp *= i;
//   }
//   return tmp;
// }

int step( int n ) {
  if( n <= 1 ){
    return 1;
  } else {
    return n * step( n-1 );
  }
}
