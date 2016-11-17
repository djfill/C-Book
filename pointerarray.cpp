#include <iostream>
#include <cstdlib> // for older compilers, use <stdlib.h>
#include <conio.h>
using namespace std;

char *fortunes[] = {
  "Soon, you will come into some money.\n",
  "A new love will enter your life.\n",
  "You will live long and prosper.\n",
  "Now is a good time to invest for the future.\n",
  "A close friend will ask for a favor.\n"
};

int main()
{
  int chance;

  cout << "To see your fortune, press a key: ";

  // randomize the random number generator 
  while(!kbhit()) rand();

  cout << '\n';

  chance = rand();
  chance = chance % 5;
  cout << fortunes[chance];

  return 0;
}