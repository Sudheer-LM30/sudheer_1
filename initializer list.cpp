#include<iostream>
using namespace std;
 
class Point {
private:
    int x;
    int y;
public:
    Point(int i = 0, int j = 0):x(i), y(j) {
	
	}  
     
    int getX() {return x;}
    int getY() {return y;}
};
 
int main() {
  Point t1(10, 15);
  cout<<"x = "<<t1.getX()<<", ";
  cout<<"y = "<<t1.getY();
  return 0;
}
