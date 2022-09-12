#include<iostream>
using namespace std;
int multofR(int arr[][4])
{
	int mofR = 1;
	int sumR = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mofR *= arr[i][j];
		}
		sumR = sumR + mofR;
		mofR = 1;
	}
	return sumR;
}
int multofC(int arry[][4])
{
	int mofC = 1;
	int sumC = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mofC *= arry[j][i];
		}
		sumC = sumC + mofC;
		mofC = 1;
	}
	return sumC;
}
int main()
{
	int arr[4][4];
	/*int mofR = 1;
	int sumR = 0;*/
	/*int mofC = 1;
	int sumC = 0;*/
	cout << "\t Enter the elments of the array \n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "\t Display the elments of the array \n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << "\t The multiplication of the Rows is = " << multofR(arr) << endl;
	cout << "\t The multiplication of the Coloms is = " << multofC(arr) << endl;
	cout << "\t The final output is " << multofR(arr) + multofC(arr) << endl;
	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mofR *= arr[i][j];
		}
		sumR = sumR + mofR;
		mofR = 1;
	}
	cout << " the multible of rows = " <<sumR<< endl;*/
	/*for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			mofC *= arr[i][j];
		}
		sumC = sumC + mofC;
		mofC = 1;
	}
	cout << " the multible of coloms = " << sumC << endl;*/
	return 0;
}