#include <iostream>
using namespace std;

void merge(int *,int, int , int );
void merge_sort(int *arr, int low, int high)
{
   int mid;
   if (low < high){
      mid=(low+high)/2;
      merge_sort(arr,low,mid);
      merge_sort(arr,mid+1,high);
      merge(arr,low,high,mid);
   }
}

void merge(int *arr, int low, int high, int mid)
{
   int i, j, k, c[50];
   i = low;
   j = mid + 1;
   k = low;
   while (i <= mid && j <= high) 
   {
   		if (arr[i] < arr[j]) {
			c[k] = arr[i];
			k++;
			i++;
   		}else {
			c[k] = arr[j];
			k++;
			j++;
   		}
   }
    if (i>mid){
	
		while (j <= high) {
   			c[k] = arr[j];
   			k++;
   			j++;
   		}
	}else{
	
		while (i <= mid) {
   			c[k] = arr[i];
   			k++;
   			i++;
   		}
	}
	
	for (k = low; k <= high; k++) {
   		arr[k] = c[k];
	}
}

int main()
{
	int myarray[30], num;
	cout<<"Enter number of elements to be sorted:";
	cin>>num;
	cout<<"Enter "<<num<<" elements to be sorted:";
	for (int i = 0; i < num; i++) {
	 
		cin>>myarray[i];
		
	}
	cout<<"Unsorted array\n";
	for (int i = 0; i < num; i++)
	{
		
   	    cout<<myarray[i]<<"\t";
   		
	}
	cout<<endl;
	
	merge_sort(myarray, 0, num-1);
	
	cout<<"Sorted array\n";
	for (int i = 0; i < num; i++)
	{
		
   	    cout<<myarray[i]<<"\t";
   		
	}
}
