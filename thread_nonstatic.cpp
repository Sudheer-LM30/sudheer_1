#include<iostream>
#include<thread>
using namespace std;
class base{
    public:
    void func(int x){
        while(x++<10){
            cout<<x<<endl;
        }
    }
};
int main(){
    base obj;
    thread t1(&base::func,&obj,0);
    t1.join();
    return 0;
}