// This program illustrates the if statement.

#include <iostream>
using namespace std;

int main()
{
  int a, b;

  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  if(a < b) 
	  cout << "First number is less than second.\n";
  else
	  cout << "Second number is less than the first.\n";
  return 0;
}
