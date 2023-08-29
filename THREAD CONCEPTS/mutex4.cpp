#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
int x=0;
mutex m;
void amount(){
    m.lock();
    ++x;
    m.unlock();
}
int main(){
    thread t1(amount);
    thread t2(amount);
    thread t3(amount);
    thread t4(amount);
    thread t5(amount);
    thread t6(amount);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();

    cout<<x<<endl;
    return 0;
}
