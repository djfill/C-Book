#include <iostream>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char s1[20], s2[10];

  strcpy(s1, "hello");
  strcpy(s2, " there");
  cout << s1 << "\n" ;
  cout << s2 << "\n" ;
  strcat(s1, s2);
  cout << s1 << "\n" ;
  cout << s2 << "\n" ;

  return 0;
}