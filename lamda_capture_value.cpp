#include<iostream>
using namespace std;

int main() {

  int x = 100;
  auto y = [x] (int num) {
    return x + num;
  };

  int z = y(78);
  cout <<z;

  return 0;
}