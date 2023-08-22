#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

class IObserver
{
	
public:
	
    virtual void newUpdateShow(float price) = 0;

};

class Shop :public IObserver

{
	
    string name;
    
    float price;
    
public:
	
    Shop(string name)
    {
    	
        this->name = name;
    }
    void newUpdateShow(float price)
    {
        this->price = price;
        cout << "Price at "<< name << " is now "<< price << "\n";
    }
};

class ShopOperationSubject
{
   vector<Shop*> list;
   vector<Shop*>::iterator itr;
   public:
      void subscribeInfo(Shop *shop)
      {
          list.push_back(shop);
      }
      void unSubscribeInfo(Shop *shop)
      {
         list.erase(remove(list.begin(), list.end(), shop), list.end());
      }
     void notifyInfo(float price)
      {
          for(vector<Shop*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
          {
              if(*iter != 0)
              {
                  (*iter)->newUpdateShow(price);
              }
          }
      }
};

class UpdateProductInfo : public ShopOperationSubject
{
public:
     void ChangePrice(float price)
     {
         notifyInfo(price);
     }
};

int main()
{
    UpdateProductInfo product;
    
    Shop shop1("Shop 1");
    Shop shop2("Shop 2");
    Shop shop3("Shop 3");
    Shop shop4("Shop 4");
    Shop shop5("Shop 5");
    Shop shop6("Shop 6");
    
    product.subscribeInfo(&shop1);
    product.subscribeInfo(&shop2);
    product.subscribeInfo(&shop3);
    product.subscribeInfo(&shop4);
    product.subscribeInfo(&shop5);
    product.subscribeInfo(&shop6);
    
    product.ChangePrice(10);
    
    product.unSubscribeInfo(&shop3);
    product.unSubscribeInfo(&shop4);
    product.unSubscribeInfo(&shop5);
    product.unSubscribeInfo(&shop6);
    
    product.ChangePrice(20);

    return 0;
}
