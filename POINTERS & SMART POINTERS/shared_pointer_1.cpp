#include<iostream>
#include<memory>
using namespace std;
class firstclass{
    int x;int y;
    public:
    firstclass(int a,int b){
        x=a;y=b;
    }
    ~firstclass(){
        cout<<"destructor"<<endl;
    }
    int getx(){
        return x+y;
    }
};
int main(){
    shared_ptr<firstclass> sp1(new firstclass(10,20));
    cout<<sp1->getx()<<endl;
    shared_ptr<firstclass> sp2;
    sp2=sp1;
    cout<<sp2->getx()<<endl;
    cout<<sp1.use_count()<<endl;
    return 0;
}