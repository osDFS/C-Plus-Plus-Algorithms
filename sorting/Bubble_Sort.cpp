#include <iostream>
using namespace std;


// Helper function to swap 2 numbers.
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

// Bubble sort function
void bubble_sort(int a[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}

// Time complexity - O(N^2)  Best - O(N)
// In place - This algorithm doesn't require any space.
// Stable Sort - The ordering of same valued elements will not change.


int main()
{

	int arr[] = {1, 5, 7, 2, 5, 3, 19, 10, 4, 13, 12}; // Initializing an unsorted array.
	int size = 11; // Size of array

	// Calling the bubble sort function.
	bubble_sort(arr, size);

	// Printing the newly sorted array.
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

// Output - 1 2 3 4 5 5 7 10 12 13 19
