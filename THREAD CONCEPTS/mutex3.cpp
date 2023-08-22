#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
    std::mutex mtx;

void myMethod1 () {

    mtx.lock();
    int x=0;
    for (int z=0; z< 10; ++z) {
        
        if (x==0){
            cout<<"zero"<<endl;
        }else{
            cout<<"not zero"<<endl;
        }
        cout<< z;
        cout<< '\n';
    }
    mtx.unlock();
}
int main ()
{
    thread thread1(myMethod1,10);
    thread thread2(myMethod1,20);
    thread1.join();
    thread2.join();
    return 0;
}