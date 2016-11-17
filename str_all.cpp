#include <iostream>
#include <cstdio> // for older compilers, use <stdio.h>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char s1[80], s2[80];

  cout << "Enter two strings: ";

  gets(s1); gets(s2);

  cout << "lengths: " << strlen(s1);
  cout << ' ' << strlen(s2) << '\n';

  if(!strcmp(s1, s2)) 
     cout << "The strings are equal\n";
  else cout << "not equal\n";
  
  strcat(s1, s2);
  cout << s1 << '\n';

  strcpy(s1, s2);
  cout << s1 << " and " << s2 << ' ';
  cout << "are now the same\n";

  return 0;
}