#include<iostream>
using namespace std;

class Boo{
	int n;
	public:
		Boo(){
			n=0;
		}
		Boo(int i){
			n=i;
		}
		Boo operator + (Boo &t){
			Boo temp;
			temp.n=n+t.n;
			return temp;
			
		}
		void disp(){
			cout<<n;
		}
};
int main(){
	Boo obj1(10),obj2(20);
	Boo obj3;
	obj3=obj1+obj2;
	obj3.disp();
	return 0;
}
