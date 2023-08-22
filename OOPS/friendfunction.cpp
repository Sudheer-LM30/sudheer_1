#include<iostream>
using namespace std;
class one{
	int x;int y;
	public:
		one(){
			x=10;
			y=20;
		}
		friend void display(one o);
};
void display(one o){
	cout<<o.x<<endl;
	cout<<o.y;
}
int main(){
	one obj;
	display(obj);
	return 0;
}
