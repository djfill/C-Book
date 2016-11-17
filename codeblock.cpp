// This program demonstrates a block of code.

#include <iostream>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  if(a < b) {
    cout << "First number is less than second.\n";
    cout << "Their difference is: " << b-a << "\n" ;
  }
  else {
	  cout << "Second number is less than the first.\n";
	  cout << "Their difference is: " << a-b << "\n" ;
  }
  
  return 0;
}