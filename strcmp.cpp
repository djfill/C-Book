#include <iostream>
#include <cstring> // for older compilers, use <string.h>
#include <cstdio>  // for older compilers, use <stdio.h>
using namespace std;

bool password();

int main()
{
  if(password()) cout << "Logged on.\n";
  else cout << "Access denied.\n";

  return 0;
}

// Return true if password accepted; false otherwise.
bool password()
{
  char s[80];

  cout << "Enter password: ";
  gets(s);

  if(strcmp(s, "password")) {  // strings differ
    cout << "Invalid password.\n";
    return false;
  }

  // strings compared the same 
  return true;
}
