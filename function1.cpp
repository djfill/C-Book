// This program contains two functions: main() and myfunc().

#include <iostream>
using namespace std;

void myfunc(); // myfunc's protoype

int main()
{
  cout << "In main()";
  myfunc(); // call myfunc()
  cout << "Back in main()" << "\n";

  return 0;
}

void myfunc()
{
  cout << " Inside myfunc() ";
}
