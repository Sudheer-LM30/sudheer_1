#include<iostream>
using namespace std;

class A{
	public:
	void func(){
		cout<<"function1"<<endl;
	}
};
class B:public A{
	public:
	void func(){
		cout<<"function2"<<endl;
	}
};

int main(){
	B obj;
	obj.func();
	return 0;
}
