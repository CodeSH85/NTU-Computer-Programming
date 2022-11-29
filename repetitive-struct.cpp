#include<iostream>
using namespace std;

int main() {
  int a = 1;
  // while(a<=10) {
  //   cout << a << endl;
  //   a++;
  // }

  // do{
  //   cout << "hi" << endl;
  //   a++;
  // }while(a<1);

  // for( int i=0 ; i<5 ; i++ ) {
  //   cout << "*" << endl;
  // };

  for( int i=1, j=10; i<=j; i++, j-- ){
    cout << i+j << '\n';
  }

  for( ; a<=10; ){
    cout << a++;
  }
}
