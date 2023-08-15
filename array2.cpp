#include<iostream>
#include<array> // for front() and back()
using namespace std;
int main()
{
    // Initializing the array elements
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Printing first element of array
    cout << "First element of array is : ";
    cout << ar.front() << endl;
 
    // Printing last element of array
    cout << "Last element of array is : ";
    cout << ar.back() << endl;

    // Printing number of array elements
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;
 
    // Printing maximum elements array can hold
    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;
 
    return 0;
 
}