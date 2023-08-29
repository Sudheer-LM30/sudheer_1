#include<iostream>
#include<thread>
using namespace std;
class base{
    public:
    void operator ()(int x){
        while(x++<10){
            cout<<x<<endl;
        }
    }
};
int main(){
    thread t1((base()),0);
    t1.join();
    return 0;
}