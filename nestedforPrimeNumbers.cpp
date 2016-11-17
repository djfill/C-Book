// This program finds the prime numbers from 2 to 1000.

#include <iostream>
using namespace std;

int main()
{
  int i, j;

  for(i=2; i<100; i++) {
    for(j=2; j <= i/2; j++)
      if(!(i%j)) break; // if factor found, not prime
    if(j>i/2) cout << i << " is prime\n";
  }

  return 0;
}
