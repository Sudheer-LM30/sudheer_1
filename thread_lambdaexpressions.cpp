#include<iostream>
#include<thread>
using namespace std;

int main(){
    auto lambda=[](int x){
        while(x++<10){
            cout<<x<<endl;
        }
    };
    thread t1(lambda,0);
    t1.join();
    return 0;
}