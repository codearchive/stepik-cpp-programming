#include <iostream>
#include "rotate.h"

using namespace std;

int main()
{
	int inputArray[5] = { 1, 2, 3, 4, 5 };
	rotate(inputArray, 5, 3);
	for (int i = 0; i < 5; ++i)
		{
			cout << inputArray[i] << ' ';
		}
}