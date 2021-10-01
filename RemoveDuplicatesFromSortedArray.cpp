// A C++ program to Remove Duplicate elements
#include<iostream>
using namespace std;

// Function to Remove Duplicate Elements
// The below function gives new Size of altered array.
int removeDuplicates(int arr[], int n)
{
	// Return, if Array is vacant or has one element
	if (n == 0 || n == 1)
		return n;
	int temp[n];
	// Start iterating elements
	int j = 0;
	for (int i = 0; i < n - 1; i++)
        // If current element is not equal to next element then save that element
		if (arr[i] != arr[i + 1])
			temp[j++] = arr[i];
	// Save the last element as  it is unique or repeated, it hasn't Saved previously
	temp[j++] = arr[n - 1];

	// Alter original array
	for (int i = 0; i < j; i++)
		arr[i] = temp[i];

	return j;
}
// Main Function
int main()
{
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
    // removeDuplicates() gives new size of Array.
	n = removeDuplicates(arr, n);
	// Print Newly updated Array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}