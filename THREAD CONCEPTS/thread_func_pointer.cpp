#include<iostream>
#include<thread>
using namespace std;
void func(int x){
    while(x++<10){
        cout<<x<<endl;
    }
}
int main(){
    thread t1(func,0);
    t1.join();
    return 0;
}