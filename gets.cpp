// Using gets() to read a string from the keyboard.

#include <iostream>
#include <cstdio> // for older compilers, use <stdio.h> 
using namespace std;

int main()
{
  char str[80];

  cout << "Enter a string: ";
  gets(str); // read a string from the keyboard
  cout << "Here is your string: ";
  cout << str << "\n" ;

  return 0;
}
