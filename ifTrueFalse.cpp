// Divide the first number by the second.

#include <iostream>
using namespace std;

int main()
{
  float a, b;

  cout << "Enter two numbers: ";
  cin >> a >> b;

  if(b) cout << a/b << '\n';
  else cout << "Cannot divide by zero.\n";

  return 0;
}
