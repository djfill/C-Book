#include <iostream>

using namespace std;

void func1() ;

int num ;

int main ()
{
	num = 2 ;
	cout << num <<"\n" ;
	func1() ;
	cout << num <<"\n" ;
}

void func1()
{
	int num ;
	num = 7 ;
	cout << num <<"\n" ;
}