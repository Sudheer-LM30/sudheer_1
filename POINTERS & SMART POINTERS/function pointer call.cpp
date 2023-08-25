#include<iostream>
using namespace std;
int function1(int x,int y){
    return x+y;
}
int main(){
    int a=10;
    int b=20;
    int (*funcpointer)(int,int);
    funcpointer=function1;
    int c=funcpointer(a,b);
    cout<<c<<endl;
    return 0;
}