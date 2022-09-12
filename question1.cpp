#include<iostream>
using namespace std;
int main()
{
	char ge;		// refare to the gender 
	char te;	// for only pregent women 
	int le;		// the kength of the player in inch
	cout << " \t What is your gender ? \t " << " \' f= femal \& m = male \' " << endl;
	cin >> ge;
	cout << " \t How tall are you  ? \t " << " \'  enter your answer in inch unit  \' " << endl;
	cin >> le;
	if (ge == 'f')
	{
		cout << " \t Are you pragnet ? \t " << " \' y or n \' " << endl;
		cin >> te;
		if (te == 'y')
		{
			cout << "-------------------------------\n " << " sorry you can not enter \:\( " << endl;
		}
		else
		{
			if (le > 45)
			{
				cout << "-------------------------------\n " << " ok you can  enter \:\) " << endl;
			}
			else
			{
				cout << "-------------------------------\n " << " sorry you can not enter \:\( " << endl;
			}
		}
	}
	else
	{
		if (le > 45)
		{
			cout << "-------------------------------\n " << " ok you can  enter \:\) " << endl;
		}
		else
		{
			cout << "-------------------------------\n " << " sorry you can not enter \:\( " << endl;
		}
	}

	return 0;
}