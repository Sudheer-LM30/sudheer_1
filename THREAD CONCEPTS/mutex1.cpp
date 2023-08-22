#include<iostream>
#include<mutex>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;
int x=0;
mutex m;
void amount(){
    m.lock();
    ++x;
    m.unlock();
}
int main(){
    auto startTime=high_resolution_clock::now();
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
    auto stopTime=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stopTime - startTime);

    cout<<x<<endl;
    cout<<duration.count()/1000000<<endl;
    return 0;
}