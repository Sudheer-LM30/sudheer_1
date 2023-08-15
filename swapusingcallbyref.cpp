#include <iostream>
using namespace std;
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=10;
    int b=20;
    cout<<"before swap:"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"after swap:"<<a<<" "<<b;
}