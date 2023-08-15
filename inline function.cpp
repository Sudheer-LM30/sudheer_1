#include<iostream>
using namespace std;

int a=10;
int b=20;
int c;
inline int func1(){
	c=a+b;
	cout<<c<<endl;
}
inline int func2(){
	c=b-a;
	cout<<c<<endl;
}

int main(){
	func1();
	func2();
	return 0;
}
