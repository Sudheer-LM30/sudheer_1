#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex m;
int counter=0;
void function1(){
    
    for (int i=0;i<100000;i++){
        if(m.try_lock()){
            counter++;
            m.unlock();
        }
    }
}
int main(){
    thread t1(function1);
    thread t2(function1);

    t1.join();
    t2.join();

    cout<<counter<<endl;
    return 0;
}



// for (int i=0;i<100000;i++){
//     m.lock()
//     counter++;
//     m.unlock();
// }