// Convert a string to uppercase. 
#include <iostream>
#include <cstring> // for older compilers, use <string.h>
#include <cctype>  // for older compilers, use <ctype.h>
using namespace std;

int main()
{
  char str[80];
  int i;

  //strcpy(str, "this is a test");

  cout << "Enter a string to convert to CAPS:" << endl;
  gets(str);
  
  for(i=0; str[i]; i++) str[i] = toupper(str[i]);

  cout << str << endl;

  return 0;
}