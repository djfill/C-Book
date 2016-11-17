// Print a string backwards.
#include <iostream>
#include <cstdio> // for older compilers, use <stdio.h>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char str[80];
  int i;
 
  cout << "Enter a string: ";
  gets(str);

  for(i=strlen(str); i>=0; i--) cout << str[i];
  cout << "\n";
  return 0;
}
