#include <iostream>

using namespace std;

int main() {
  // Enter an interger 
  int num;
  cout << "Enter an integer: " ;
  cin >> num ;

  // Will check if the number is even or odd.
  if (num % 2 == 0) {
    cout << num << " is even." << endl;
  } else {
    cout << num << " is odd." << endl;
  }

  // Will check if the number is positive, negative, or zero.
  if (num > 0) {
    cout << num << " is positive." << endl;
  } else if (num < 0) {
    cout << num << " is negative." << endl;
  } else {
    cout << num << " is zero." << endl;
  }

  return 0;
}