#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class" << endl;
    }

    void derivedFunction() {
        cout << "Function specific to Derived class" << endl;
    }
};

int main() {
    //upcasting  : Derived class pointer/reference to Base class pointer/reference
    Derived derivedObj;
    Base* basePtr = static_cast<Base*>(&derivedObj);

    basePtr->show(); 

    //Downcasting: Base class pointer/reference to Derived class pointer/reference
    Base baseObj;
    // Attempt to downcast using static_cast (unsafe)
    Derived* derivedPtr = static_cast<Derived*>(&baseObj);
    
    if (derivedPtr != nullptr) {
        // This block will not be executed, as static_cast failed
        derivedPtr->show();
        derivedPtr->derivedFunction();
    } else {
        cout << "Downcast using static_cast failed!" << endl;
    }

    return 0;
}

