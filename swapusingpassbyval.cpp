#include<iostream>
using namespace std;

int fun(int a)
{
        a=a+10;
        return a;       
}

int main()
{
        int a=5;
        fun(a);
        cout<<a;
}


