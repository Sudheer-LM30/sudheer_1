#include<iostream>
using namespace std;
class operatoroverloading{
	int x;
	public:
		operatoroverloading(){
			x=5;
		}
		void display(){
			cout<<x<<endl;
		}
		int operator ++(){
			++x;
		}
		
};
int main(){
	operatoroverloading obj;
	++obj;
	obj.display();
	return 0;
}
