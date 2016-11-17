// Returning a value.

#include <iostream>
using namespace std;

int mul(int x, int y); // mul()'s prototype

int main()
{
  int answer;

  answer = mul(10, 11); // assign return value
  cout << "The answer is " <<  answer << "\n";

  return 0;
}

// This function returns a value. 
int mul(int x, int y)
{
  return x * y; // return product of x and y
}