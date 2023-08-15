#include<iostream>
using namespace std;
class Base
{
  private:
  int value;
  public:
  // default constructor
  Base(int v):value(v)
  {
    cout << "Value is " << value;
  }
};
int main()
{
  Base myobject(10);
  return 0;
}

