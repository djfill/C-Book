#include <iostream>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

void f1();

int main()
{
  f1(); 
  f1();

  return 0;
}

void f1()
{
  char s[80]="this is a test\n";

  cout << s;
  strcpy(s, "CHANGED\n"); // change s
  cout << s;
}