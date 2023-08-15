#include <iostream> 
#include <thread>         
#include <mutex>
using namespace std;         

mutex m;           

void print_block (int n, char c) {
  m.lock();
  for (int i=0; i<n; ++i){
     std::cout << c; 
  }
  cout << '\n';
  m.unlock();
}

int main ()
{
  thread t1 (print_block,50,'*');
  thread t2 (print_block,50,'$');

  t1.join();
  t2.join();

  return 0;
}