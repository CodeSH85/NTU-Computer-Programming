#include <iostream>
#include <iomanip>
#include <cstdlib> // contains function prototype of rand
using namespace std;

int main() {
  int freq1 = 0;
  int freq2 = 0;
  int freq3 = 0;
  int freq4 = 0;
  int freq5 = 0;
  int freq6 = 0;

  int face;

  for( int roll = 1; roll < 600; roll++ ){
    face = 1 + rand() % 6;

    switch( face ){
      case 1:
        ++ freq1;
        break;
      case 2:
        ++ freq2;
        break;
      case 3:
        ++ freq3;
        break;
      case 4:
        ++ freq4;
        break;
      case 5:
        ++ freq5;
        break;
      case 6:
        ++ freq6;
        break;
      default:
        cout << "Program should never get here!";
    }
  }

  cout << "Face" << setw( 13 ) << "Frequency" << endl;
  cout << "   1" << setw( 13 ) << freq1
    << "\n   2" << setw( 13 ) << freq2
    << "\n   3" << setw( 13 ) << freq3
    << "\n   4" << setw( 13 ) << freq4
    << "\n   5" << setw( 13 ) << freq5
    << "\n   6" << setw( 13 ) << freq6 << endl;
}
