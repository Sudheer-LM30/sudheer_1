#include <iostream>
using namespace std;

int main() {

  int num1 = 0;
  auto num2 = [&num1] () {
    num1++;
  };
  num2();

  cout << num1 << endl;

  return 0;
}