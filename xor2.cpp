// This program demonstrates the a function to simulate xor and the xor operator.
#include <iostream>
using namespace std;

bool func_xor(bool a, bool b);

int main()
{
  int p, q;

  cout << "Enter P (0 or 1): ";
  cin >> p;
  cout << "Enter Q (0 or 1): ";
  cin >> q;

  cout << "P AND Q: " << (p && q) << '\n';
  cout << "P OR Q: " << (p || q) << '\n';
  cout << "P phil Q: " << func_xor(p, q) << '\n'; 
  cout << "P xor Q: " << (p xor q) << '\n'; 

  return 0;
}

bool func_xor(bool a, bool b)
{
  return (a || b) && !(a && b);
}
