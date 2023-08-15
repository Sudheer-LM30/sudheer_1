# include <iostream>
using namespace std;

int Partition(int arr[], int lb, int ub)
{
 int pivot = arr[lb];
 int start = lb;
 int end = ub;
 
 while(start<end){
 	while(arr[start]<=pivot){
 		start++;
	}
	while(arr[end]>pivot){
		end--;
	}
	if (start<end){
		swap(arr[start],arr[end]);
	}
 }
 swap(arr[lb],arr[end]);
 return end;
}
 
void QuickSort(int arr[], int lb, int ub)
{
 if(lb<ub)
 {
 	int p = Partition(arr,lb, ub);
 	QuickSort(arr, lb, (p-1));  
 	QuickSort(arr, (p+1), ub); 
 }
}
 
int main()
{
 
 int size=0;
 cout<<"Enter Size of array: "<<endl;
 cin>>size;
 int myarray[size];
 
 cout<<"Enter "<<size<<" integers in any order: "<<endl;
 for(int i=0;i<size;i++)
 {
	cin>>myarray[i];
 }
 cout<<"Before Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 	cout<<myarray[i]<<" ";
 }
 cout<<endl;
 
 QuickSort(myarray,0,(size-1));
 
 cout<<"After Sorting"<<endl;
 for(int i=0;i<size;i++)
 {
 	cout<<myarray[i]<<" ";
 }
 
 return 0;
}
