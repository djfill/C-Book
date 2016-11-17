#include <iostream>
#include <cstdio>  // for older compilers, use <stdio.h>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char s[80];

  for(;;) {
    cout << "Enter a string: ";
    gets(s);
    if(!strcmp("quit", s)) break;
  }

  return 0;
}
