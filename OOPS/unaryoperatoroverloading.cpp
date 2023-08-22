#include<iostream>
using namespace std;
class one{
	int x;
	public:
		one(){
			x=10;
		}
		int display(){
			cout<<x;
		}
		void operator ++(int){
			x++;
		}
};
int main(){
	one obj;
	obj++;
	obj.display();
	return 0;
}
