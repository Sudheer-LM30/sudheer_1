#include<iostream>
#include<thread>
using namespace std;

void function1(int x,int y,int &z){
    z=x+y;
}
void function2(int a,int b,int &c){
    c=a*b;
}
int main(){
    int result1,result2;
    thread t1(function1,1,2,ref(result1));
    thread t2(function2,2,1,ref(result2));
    t1.join();
    t2.join();
    cout<<result1<<endl;
    cout<<result2<<endl;
    return 0;
}