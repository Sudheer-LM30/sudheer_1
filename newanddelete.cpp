#include<iostream>
using namespace std;
class one{
	public:
		int *p=new int;
		int *q=new int;
		void func(int a,int b){
			*p=a;*q=b;
		}
		int func2(){
			return *p+*q;
		}
};
int main(){
	one obj;
	obj.func(10,20);
	cout<<obj.func2();
	return 0;
}
