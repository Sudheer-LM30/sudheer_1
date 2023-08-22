#include<iostream>
using namespace std;
class one{
	public:
		void func1(){
			cout<<"first class";
	}
};
class two:public one{
	public:
		void func1(){
			cout<<"second class";
		}
};
class three:public two{
	public:
		void func2(){
			cout<<"third class";
		}
};
int main(){
	three obj;
	obj.one::func1();
	return 0;
}
