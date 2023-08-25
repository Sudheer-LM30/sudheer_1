#include <iostream>
using namespace std;

int a = 15;
int b = 2;

int multiply() { 
    return a * b; 
}

void print(int (*funcptr)())
{
	cout << "The value of the product is: " << funcptr()<< endl;
}

int main()
{
	print(multiply);
	return 0;
}
