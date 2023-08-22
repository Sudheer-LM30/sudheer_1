#include<iostream>
using namespace std;
class one{
	int x;
	int y;
	public:
		one(int a,int b){
			x=a;
			y=b;
		}
		one(const one &p2){
			x=p2.x;
			y=p2.y;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
		
};
int main(){
	one p1(10,5);
	one p2=p1;
	cout<<p1.getx()<<" "<<p1.gety()<<endl;
	cout<<p2.getx()<<" "<<p2.gety();
	return 0;
}
