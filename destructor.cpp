#include<iostream>
using namespace std;
class one{
	int x;
	int y;
	public:
		one(int a,int b){
			x=a;y=b;
		}
		~one(){
			cout<<"destructor called";
		}
		int funct(){
			return x+y;
		}
};
int main(){
	one obj(10,5);
	cout<<obj.funct()<<endl;
	return 0;
}
