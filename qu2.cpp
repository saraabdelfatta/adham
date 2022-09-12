#include<iostream>
using namespace std;
int greatest3(int size, int *arr)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j=1+i; j < size; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return *arr;
}
int main()
{
	int size;
	cout << "\t Enter the size of the array please \n";
	cin >> size;
	cout << "\t Enter the elements of the array please \n";
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << "\t Show the elments of the array  \n"<<endl;
	for (int k = 0; k < size; k++)
	{
		cout << arr[k]<<" ";
	}
	cout << endl;
	cout << " \t The greatest third value is "<<endl;
	greatest3(size, arr);
	cout << arr[2] ;
	delete[]arr;

	return 0;
}