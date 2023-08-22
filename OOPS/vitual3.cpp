#include<iostream>
using namespace std;

class A{
	public:
	 virtual void robo(){
		cout<<"base robo"<<endl;
	}
	
	 void sana(){
		cout<<"base sana"<<endl;
	}
};
class B:public A{
	public:
	void robo(){
		cout<<"derived robo"<<endl;
	}
	
	void sana(){
		cout<<"derived sana"<<endl;
	}
};

int main(){
//	A obj1;
	B obj2;
//	A *ptr;
//	ptr=&obj1;
//	ptr->robo();
//	ptr->sana();
//	ptr=&obj2;
//	ptr->robo();
//	ptr->sana();
	//obj1.robo();
	//obj1.sana();
	obj2.robo();
	obj2.sana();
	return 0;
}
