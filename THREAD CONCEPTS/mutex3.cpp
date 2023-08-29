#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex m;

void myMethod1 (int x) {

    m.lock();
   
        if (x==0){
            cout<<"zero"<<endl;
        }else{
            cout<<"not zero"<<endl;
        }
        cout<< x;
        cout<< '\n';
    
    m.unlock();
}
int main ()
{
    thread t1(myMethod1,0);
    thread t2(myMethod1,20);

    t1.join();
    t2.join();
    return 0;
}