#include <iostream>
#include <thread>
using namespace std;
void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        cout << "Thread using function"<<endl;
    }
}
class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using functor"<<endl;
    }
};
  
int main()
{
    cout << "Threads 1 and 2 and 3 "<< endl;
    thread th1(foo, 3);
    thread th2(thread_obj(), 3);
  
    auto f = [](int x) {
        for (int i = 0; i < x; i++)
            cout << "Thread using lambda"<<endl;
    };

    thread th3(f, 3);
    th1.join();
    th2.join();
    th3.join();
  
    return 0;
}