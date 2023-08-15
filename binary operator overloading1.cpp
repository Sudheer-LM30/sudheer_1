#include <iostream>
using namespace std;

class BOO{
	int n;
	public:
		BOO(){
			n=0;
		}
		BOO(int a){
			n=a;
		}
		void display(){
			cout<<n<<endl;
		}
		BOO operator + (BOO &t){
			BOO temp;
			temp.n=n+t.n;
			return temp;
		}	
};
int main(){
	BOO obj1(10),obj2(20);
	BOO obj3;
	obj3=obj1+obj2;
	obj3.display();
	return 0;
	
}
