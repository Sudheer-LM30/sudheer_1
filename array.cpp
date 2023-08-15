#include<iostream>
#include<array>
#include<tuple> // for get()
using namespace std;
int main()
{
	array<int,6> ar = {1, 2, 3, 4, 5, 6};
	
	array<int,6> ar1 = {7, 8, 9, 10, 11, 12};
	
    array<int,6> ar2;
 
    array<int,0> ar3;

	// Printing array elements using at()
	cout << "The array elements are (using at()) : ";
	for ( int i=0; i<6; i++)
	cout << ar.at(i) << " ";
	cout << endl;

	// Printing array elements using get()
	cout << "The array elements are (using get()) : ";
	cout << get<0>(ar) << " " << get<1>(ar) << " ";
	cout << get<2>(ar) << " " << get<3>(ar) << " ";
	cout << get<4>(ar) << " " << get<5>(ar) << " ";
	cout << endl;

	// Printing array elements using operator[]
	cout << "The array elements are (using operator[]) : ";
	for ( int i=0; i<6; i++)
	cout << ar[i] << " ";
	cout << endl;
	
	cout << "First element of array is : ";
    int &a=ar.front();
    cout <<a<< endl;
 
    // Printing last element of array
    cout << "Last element of array is : ";
    int &b=ar.back();
    cout << b << endl;
      
    //change first and last element of array using these references
    a=10; //now 1 change to 10
    b=60; //now 6 change to 60
     
    //lets print array now
    cout<<"array after updating first and last element \n";
    for (auto x: ar)
    {
      cout<<x<<" ";
    }
    cout<<endl;
    
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;
    
    // Printing 1st and 2nd array before swapping
    cout << "The first array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    // Swapping ar1 values with ar
    ar.swap(ar1);
 
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
    
    ar3.empty()? cout << "Array empty":
        cout << "Array not empty";
    cout << endl;
 
    // Filling array with 0
    ar2.fill(0);
 
    // Displaying array after filling
    cout << "Array after filling operation is : ";
    for ( int i=0; i<6; i++)
        cout << ar2[i] << " ";
	return 0;

}

