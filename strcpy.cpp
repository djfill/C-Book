#include <iostream>
#include <cstring> // for older compilers, use <string.h>
using namespace std;

int main()
{
  char str[80];

  strcpy(str, "hello");
  cout << str << "\n" ;
  cout << str[0] << str[1] << str[2] << str[3] << str[4] << str[5] << "\n" ;

  return 0;
}
