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
    unique_ptr<firstclass> sp1(new firstclass(10,20));
    cout<<sp1->getx()<<endl;
    unique_ptr<firstclass> sp2;
    sp2=move(sp1);
    cout<<sp2->getx()<<endl;
    cout<<sp1->getx()<<endl;

    
    return 0;
}