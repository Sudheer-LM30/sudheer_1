#include <iostream>
using namespace std;

class base {
public:
	virtual void print() { 
		cout << "print base class\n"; 
	}

	void show() { 
		cout << "show base class\n"; 
	}
};

class derived : public base {
public:
	void print() { 
		cout << "print derived class\n"; 
	}

	void show() { 
		cout << "show derived class\n"; 
	}
};

int main()
{
	base obj1;
	derived obj2;
	base* bptr=&obj1;
	bptr->print();
	bptr->show();
	
	derived *dptr=&obj2;
	dptr->print();
	dptr->show();
	
	
	derived obj3;
	bptr = &obj3;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();

	return 0;
}

