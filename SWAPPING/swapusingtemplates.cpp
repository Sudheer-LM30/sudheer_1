#include<iostream>
using namespace std;
template <class t>
void swapnum(t &a,t &b){
	t temp;
	temp=a;
	a=b;
	b=temp;
}
int main(){
	int x,y;
	x=10;
	y=20;
	cout<<x<<" "<<y<<endl;
	swapnum(x,y);
	cout<<x<<" "<<y<<endl;
	return 0;
}
