#include<iostream>
using namespace std;

class A{
	public:
	void robo(){
		cout<<"base robo"<<endl;
	}
};
class B:public A{
	public:
	void robo(){
		cout<<"derived robo"<<endl;
	}
};

int main(){
	A obj1;
	B obj2;
	obj1.robo();
	obj2.robo();
	return 0;
}
