// A simple employee database program.

#include <iostream>
using namespace std;

char name[10][80];  // this array holds employee names
char phone[10][20]; // their phone numbers
float hours[10];    // hours worked per week
float wage[10];     // wage

int menu();		//menu function
void enter(), report();	//enter, report and quit functions

int main()
{
  int choice;

  do {
    choice = menu(); // get selection
    switch(choice) {
      case 0: break;
      case 1: enter();
        break;
      case 2: report();
        break;
      default: cout << "Try again.\n\n";
    }
  } while(choice != 0);

  return 0;
}

// Return a user's selection.
int menu()
{
  int choice;

  cout << "0. Quit\n";
  cout << "1. Enter information\n";
  cout << "2. Report information\n";
  cout << "\nOption: ";
  cin >> choice;

  return choice;
}

// Enter information.
void enter()
{
  int i;
  char temp[80];

  for(i=0; i<10; i++) {
    cout << "Enter last name: ";
    cin >> name[i];
	if(!strcmp("quit" , name[i])){
		break;
	};
    cout << "Enter phone number: ";
    cin >> phone[i];
    cout << "Enter number of hours worked: ";
    cin >> hours[i];
    cout << "Enter wage: ";
    cin >> wage[i];
  }
}

// Display report.
void report()
{
  int i;

  for(i=0; i<10; i++) {
    cout << name[i] << ' ' << phone[i] << '\n';
    cout << "Pay for the week: " << wage[i] * hours[i];
    cout << '\n';
  }
}
