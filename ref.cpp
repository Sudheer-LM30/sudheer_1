#include<iostream>
using namespace std;
int main(){
    int x=20;
    int &y=x;
    cout<<x<<endl;
    cout<<&y<<endl;
    return 0;
}