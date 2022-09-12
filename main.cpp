#include <iostream>
using namespace std;

int* createArray(int size) {
	int* arr = new int[5];

	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}

	return arr;
}

int main() {
	int* ptr = createArray(5);

	for(int i = 0; i < 5; i++)
		cout << ptr[i] << endl;

	delete [] ptr;

//	int arr[5] = {10, 20, 30, 40, 50};
//
//	int* ptr01 = arr;
//
//	int* ptr02 = new int[]; //in the heap
//
//	for (int i = 0; i < 5; i++) {
//		ptr02[i] = i*10 + i;
//	}
//
//	for(int i = 0; i < 5; i++)
//		cout << ptr02[i] << endl;
//
//	delete[] ptr02;
	
	cout << "\n\n ";
	return 0;
}
