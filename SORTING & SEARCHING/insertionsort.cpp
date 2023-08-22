#include<iostream>
using namespace std;
int main ()
{
   //int myarray[5] = { 12,4,3,1,15};
   
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   
   int myarray[n];
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> myarray[i];
   }
   cout<<"\nBefore Sorting \n";
   for(int i=0;i<n;i++)
   {
      cout <<myarray[i]<<"\t";
   }
   
   for(int k=1; k<n; k++)
   {
      int temp = myarray[k];
      int j= k-1;
      while(j>=0 && temp <= myarray[j])
      {
        myarray[j+1] = myarray[j];
        j = j-1;
      }
      myarray[j+1] = temp;
   }
   
cout<<"\nAfter sorting \n";
for(int i=0;i<n;i++)
   {
   cout <<myarray[i]<<"\t";
   }
}
