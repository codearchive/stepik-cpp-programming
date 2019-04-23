#include "transpose.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned firstArrayRows = 0;
	unsigned firstArrayCols = 0;
	cin >> firstArrayRows >> firstArrayCols;
	int ** firstArray = create_array2d(firstArrayRows, firstArrayCols);
	int value = 1;
	int * ptrValue = &value;
	for (unsigned i = 0; i != firstArrayRows; ++i)
	{
		for (unsigned j = 0; j != firstArrayCols; ++j)
		{
			firstArray[i][j] = (*ptrValue)++;
			cout << firstArray[i][j] << " ";
		}
		cout << endl;
	}
	int ** secondArray = transpose(firstArray, firstArrayRows, firstArrayCols);
	cout << "Result:" << endl;
	for (unsigned i = 0; i != firstArrayRows; ++i)
	{
		for (unsigned j = 0; j != firstArrayCols; ++j)
		{
			cout << secondArray[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
