#include <iostream>
using namespace std;

int main() // print i and i/2 with fractions
{
  int i;

  for(i=1; i<=30; ++i )
    cout << i << "/ 8 is: " << (float) i / 8 << '\n';

  return 0;
}
