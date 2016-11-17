#include <iostream>
#include <cstdio>  // for older compilers, use <stdio.h>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char str[80];

  cout << "Enter a string: ";

  gets(str);

  cout << "Length is: " <<  strlen(str) << "\n";

  return 0;
}