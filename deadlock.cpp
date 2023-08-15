#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
mutex m1;
mutex m2;
void thread1(){
    m1.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m2.lock();
    cout<<"dead lock 1"<<endl;
    m1.unlock();
    m2.unlock();
}
void thread2(){
    m2.lock();
    std::this_thread::sleep_for(std::chrono::seconds(1));
    m1.lock();
    cout<<"dead lock 2"<<endl;
    m2.unlock();
    m1.unlock();
}
int main(){
    thread t1(thread1);
    thread t2(thread2);
    t1.join();
    t2.join();
    return 0;
}