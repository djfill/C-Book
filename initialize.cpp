// An example using variable initialization.
#include <iostream>
using namespace std;

void total(int x);

int main()
{
  int t;

  total(5);
  total(6);

  cout << "Enter a number: ";
  cin >> t;
  total(t);

  return 0;
}

void total(int x)
{
  int sum=0; // initialize sum
  int i, count;

  for(i=1; i<=x; i++) {
    sum = sum + i;
    for(count=0; count<10; count++) cout << '.';
    cout << "The current sum is " << sum << '\n';
  }
}
