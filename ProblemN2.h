#include "ProblemN1.h"

int returnThirdLargestValue(int array[], int _size);
void swap(int &x, int &y);

// Problem 02; Third Largest Value in an Array
void ProblemN2() {
	int size;
	
	cout << "\n Please enter the size of the array: ";
	cin >> size;
	
	// this if statement makes sure the user does not enter a size for the array smaller than 2
	// .. as we need at least three elements in order to get the third largest one
	if (size < 3) {
		cout << "\n Sorry, the size needs to be larger than 2\n";
		printSeperator();
		ProblemN2(); // when size is less than 3 the function is called recursively in order for the user to input a size larger than 2
	}
	else {
		int arr[size];
		
		cout << "\n Please enter the <" << size << "> values of the array of integers (seperated by spaces):\n ";
		
		for (int i = 0; i < size; i++)
			cin >> arr[i];
		
		cout << "\n The third largest element in the array you entered is: " << returnThirdLargestValue(arr, size) << endl;
	}
}

// This is the function called to return the third largest value in a passed/given array
int returnThirdLargestValue(int array[], int _size) {
	int array_cpy[_size];
	
	// elements of the array are copied into a temp array
	for (int i = 0; i < _size; i++)
		array_cpy[i] = array[i];
	
	// the temp array is sorted ascendingly (smallest to largest)
	// if a preceding element in the array is larger than the one following it
	// .. the swap function is called to swap those two slots in the array in order to have the array sorted ascendingly
	for (int i = 0; i < _size; i++)
		for (int j = 0; j < _size; j++)
			if (array_cpy[i] >= array_cpy[j])
				swap(array_cpy[i], array_cpy[j]);

	// the function returns third value in array (with index of 2)
	// .. as when sorted, the third element in the temp array is the third largest element in the original array
	return array_cpy[2];
}

// This swap function is used to help sort the temp array by swaping two given slots in the array
void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}
