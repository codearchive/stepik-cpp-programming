#include <iostream>
#include "swap_min.h"

using namespace std;

int main()
{
	int arrayRows = 0;
	int arrayCols = 0;
	cout << "Enter number of Rows and Cols of array" << endl;
	cout << "Rows = ";
	cin >> arrayRows;
	cout << "Cols = ";
	cin >> arrayCols;
	int ** arrayTest = create_array2d(arrayRows, arrayCols);
	int keyValue = 0; 
	int * ptrKeyValue = &keyValue;
	for (int i = 0; i < arrayRows; ++i)
	{
		cout << "Enter string # " << i << endl;
		for (int j = 0; j < arrayCols; ++j)
		{
			cin >> arrayTest[i][j];
		}
	}
	swap_min(arrayTest, arrayRows, arrayCols);
	for (int i = 0; i < arrayRows; ++i)
	{
		for (int j = 0; j < arrayCols; ++j)
		{
			cout << arrayTest[i][j];
		}
		cout << endl;
	}
	return 0;
}