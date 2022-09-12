#include<iostream>
using namespace std;
int sumofeven(int size, int* prt)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (prt[i] % 2 == 0)
		{
			sum = sum + prt[i];
		}
	}
	return sum;
}
int main()
{
	int size;
	cout << " \t Enter the size of the array \n";
	cin >> size;
	cout << " \t Enter the elements of the array \n";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << " \t Display the elments of the array  \n";
	for (int k = 0; k < size; k++)
	{
		cout << arr[k] << " ";
	}
	cout << endl;
	cout << " \t The sum of even numbers in the array  \n";
	cout << sumofeven(size, arr) << endl;
	delete[]arr;
	return 0;
}