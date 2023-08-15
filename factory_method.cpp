#include <iostream>
using namespace std;

enum cakeType{choc,vanila,strawberry};

class Cake
{
    public:
    virtual void recipe() = 0;
};

class ChoclateCake:public Cake
{
    public:
    void recipe()
    {
        cout<<"choclate"<<endl;
    }
};

class VanilaCake:public Cake
{
    public:
    void recipe()
    {
        cout<<"Vanila"<<endl;
    }
};

class StrawberryCake:public Cake
{
    public:
    void recipe()
    {
        cout<<"Strawberry"<<endl;
    }
};

class factory
{
    private:
    enum cakeType TypeOfCake;
    static Cake *obj;
    public:
     
    factory()
    {
       cout<<"Constructor"<<endl;
    }

   static Cake* getIns(cakeType type)
    {
           if(type == choc)
           {
                obj = new ChoclateCake();
           }
           else if (type == vanila)
           {
                obj =  new VanilaCake();
           }
           else if (type == strawberry)
           {
           		obj =  new StrawberryCake();
		   }
           
           return obj;
    }
};

Cake* factory::obj = nullptr;

int main()
{
Cake* Cobj = factory::getIns(vanila);
Cobj->recipe();
return 0;

}
