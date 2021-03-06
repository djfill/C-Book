// Demonstrate the switch using a simple "help" program.
#include <iostream>
using namespace std;

int main()
{
  int choice;

  cout << "Help on:\n\n";
  cout << "1. for\n";
  cout << "2. if\n";
  cout << "3. switch\n\n";
  
  cout << "Enter choice: (1-3): ";
  cin >> choice;

  switch(choice) {
    case 1: 
      cout << "for is C++'s most versatile loop.\n";
      break;
    case 2: 
      cout << "if is C++'s conditional branch statement.\n";
      break;
    case 3:
      cout << "switch is C++'s multi-way branch statement.\n";
      break;
    default: 
      cout << "You must enter a number between 1 and 3.\n";
  }

  return 0;
}