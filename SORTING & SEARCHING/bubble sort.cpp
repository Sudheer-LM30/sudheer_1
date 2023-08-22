#include<iostream>
using namespace std;
int main ()
{
   int a[50],n,i, j,temp;
   cout<<"enter array size:";
   cin>>n;
   cout<<"Enter "<<n<<" Numbers: ";
   
   for(i=0; i<n; i++){
        cin>>a[i];
   }
   
   cout <<"Before Sorting\n";
   for(i = 0; i<n; i++) {
      cout <<a[i]<<"\t";
   }
   cout<<endl;
   
   for(i = 0; i<n-1; i++) 
   {
      for(j = 0; j<n-1; j++)
       {
            if(a[j] > a[j+1]) 
			{
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
            }
       }
   }
   
   cout <<"After Sorting\n";
   
   for(i = 0; i<n; i++)
   {
      cout <<a[i]<<"\t";
   }
   
   return 0;
}
