#include<iostream>
using namespace std;
class one{
	int a;
	int b;
	public:
		one(int a,int b){
			this->a=a;
			this->b=b;
		}
		int display(){
			return a+b;
		}
};
int main(){
	one obj(10,20);
	cout<<obj.display();
	return 0;
}
