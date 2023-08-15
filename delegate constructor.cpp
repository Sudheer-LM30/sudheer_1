#include <iostream>
#include <string>
using namespace std;

class Person {
	
private:
    string m_name;
    
    int m_age;
    
public:
	
    Person() : Person("Unknown", 0) {
	
	}  // delegate constructor

    Person(string &name, int age) : m_name(name), m_age(age) {
	
	}

    void print() {
    	
        cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
        
    }


};

int main() {
    Person p1;
    Person p2{"Alice", 25};
    p1.print();
    p2.print();
    return 0;
}

