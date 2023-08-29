#include<iostream>
#include<thread>
using namespace std;
class base{
    public:
    static void func(int x){
        while(x++<10){
            cout<<x<<endl;
        }
    }
};
int main(){
    thread t1(&base::func,0);
    t1.join();
    return 0;
}