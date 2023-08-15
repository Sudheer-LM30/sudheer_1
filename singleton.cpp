#include <iostream>
using namespace std;
class MySingleton 
{
private:
        MySingleton() 
        {
             i = 10;
            cout<<"Singleton constructor"<<endl;
        }
        MySingleton(const MySingleton&) = delete;
        MySingleton& operator=(const MySingleton&) = delete;
        static MySingleton* ptr;    
    
public:
         int i;
         
         static MySingleton* getInstance()
         {
             if(ptr == NULL)
             {
                ptr = new MySingleton();
             }

             return ptr;
         }
         
         ~MySingleton()
          {
              delete ptr;
          }
             
         

};

 MySingleton* MySingleton::ptr = nullptr;    

int main() 
{

MySingleton* FirstPtr = MySingleton::getInstance();
cout<<"Default value of i = "<<FirstPtr->i<<endl;

MySingleton* SecondPtr = MySingleton::getInstance();
FirstPtr->i = 20;
cout<<"Changed the value of i using 'FirstPtr' however accesing vlue of i by SecondPtr = " 
    <<SecondPtr->i<<endl;
    
return 0;

}
