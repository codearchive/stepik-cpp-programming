#include <iostream>
#include "strstring.h"

int main()
{
	using namespace std;
	const char string1[13] = "0123456789ab";
	const char string2[13] = "9ab";
	cout << strstring(string1, string2) << endl;
	return 0;
}