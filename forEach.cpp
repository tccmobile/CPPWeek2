// C++ program to demonstrate use of foreach for array
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 10, 20, 30, 40 };

	// Printing elements of an array using
	// foreach loop
	// Here, int is the data type, x is the variable name
	// and arr is the array for which we want to iterate foreach
	cout<<"Traversing the array with foreach using array's data type: ";
	for (int x : arr)
		cout<<x<<" ";
	
	// data type of x is set as int
	cout<<"\nTraversing the array with foreach using auto keyword	 : ";
	for (auto x : arr)
	cout<<x<<" ";
}

