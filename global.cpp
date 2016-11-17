#include <iostream>
using namespace std;

void func1();
void func2();

int num1; // this is a global variable 

int main()
{
  int i; // this is a local variable 

  for(i=0; i<10; i++) {
    num1 = i * 2;
    func1();
  }

  return 0;
}

void func1()
{
  func2();
  cout << "num1: " << num1; // access global num1
  cout << '\n'; // output a newline
}

void func2()
{
  int num1; // this is a local variable

  for(num1=0; num1<3; num1++) cout << '.';
}