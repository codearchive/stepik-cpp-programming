#include <iostream>
#include "strconcat.h"

int main()
{
	using namespace std;

	char string1[15] = "Hello  ";
	const char string2[7] = "world!";
	strconcat(string1, string2);
	cout << string1 << endl;
	return 0;
}