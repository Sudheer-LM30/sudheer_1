#include<iostream>
using namespace std;
template <class t>
class one{
	t a,b;
	public:
		void func1(){
			cin>>a>>b;
		}
		t func2(){
			return a+b;
		}
};
int main(){
	one <int>obj1;
	one <float>obj2;
	obj1.func1();
	obj2.func1();
	cout<<obj1.func2()<<endl;
	cout<<obj2.func2();
	return 0;
}
