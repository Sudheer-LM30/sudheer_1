#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[50],len,i,num,f;
    
    cout<<"enter the size:";
    cin>>len;
    
    cout<<"enter "<<len<<" elements:"<<endl;
    

    cout<<"Array: ";
    for(i=0; i<len; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"\n\nEnter number to search ";
    cin>>num;

    f=0;

    for(i=0; i<len; i++)
    {
        if(num==arr[i])
        {
            cout<<"Number found at index "<<i;
            f=1;
            break;
        }
    }

    if(f==0)
    {
        cout<<"Number not found";
    }
    return 0;
}
