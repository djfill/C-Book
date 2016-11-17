#include <iostream>
using namespace std;

int main()
{
  int t;

  // Loops from 0 to 20, not to 100!
  for(t=0; t<100; t++) {
    if(t==21) break;
    cout << t << ' ';
  }
  cout << "\n" ;
  return 0;
}