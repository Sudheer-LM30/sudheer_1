#include<iostream>
using namespace std;

class base{
	virtual void func1(){
		cout<<"base class"<<endl;
	}
};

class derived1:public base{
	void func1(){
		cout<<"derived class 1"<<endl;
	}
};

class derived2:public base{
	void func1(){
		cout<<"derived class 2"<<endl;
	}
};

int main(){
	derived1 d1;
	base *b=dynamic_cast<base*>(&d1);
	derived1 *d2=dynamic_cast<derived1>(b);
	
	if(d2==nullptr){
		cout<<"null"<<endl;
	}else{
		cout<<"not null"<<endl;
	}
	return 0;
}
