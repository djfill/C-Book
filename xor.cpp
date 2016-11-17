/*     !!!!This does not compile!!!!
This program demonstrates the xor() function.
We try and declare xor as a function here, but it is a logical operator.
Refer to xor2.cpp which is a working application 
*/
#include <iostream>
using namespace std;

bool xor(bool a, bool b);

int main()
{
  int p, q;

  cout << "Enter P (0 or 1): ";
  cin >> p;
  cout << "Enter Q (0 or 1): ";
  cin >> q;

  cout << "P AND Q: " << (p && q) << '\n';
  cout << "P OR Q: " << (p || q) << '\n';
  cout << "P XOR Q: " << xor(p, q) << '\n'; 

  return 0;
}

bool xor(bool a, bool b)
{
  return (a || b) && !(a && b);
}
