#include <iostream>
using namespace std;
 
const int a = 15;
const int b = 2;
 
int multiply() { 

	return a * b;
	
}

int addition() {
	
	return a + b;
	
}

void print(int (*funcptr)())
{
    cout << "The value of the product is: " << funcptr() << endl;
}
 
int main()
{
    print(addition);
    return 0;
}
