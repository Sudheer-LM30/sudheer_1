#include<iostream>
using namespace std;
class one{
	int x;int y;
	public:
		void func(int a,int b){
			x=a;y=b;
		}
		int func1();
};
int one::func1(){
	return x+y;
}
int main(){
	one obj1;
	obj1.func(10,5);
	cout<<obj1.func1();
	return 0;
}
