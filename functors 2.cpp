#include<iostream>
using namespace std;

class Mul{
	
	int num;
	
	public:
		Mul(){
			
		}
		
		Mul(int val):num{val}{
		
		}
		
		int operator () (int val){
			
			return val*num;
			
		}
};

int main(){
	Mul mul(12);
	cout<<mul(2)<<endl;
	cout<<mul(3)<<endl;
	return 0;
}
