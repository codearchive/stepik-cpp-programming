#include <iostream>

using namespace std;

int main()
{
	char c = '\0';
	char p = '\0';
	while (cin.get(c)) {
		if (c != ' ' || p != ' ') cout << c;
		p = c;
	}
	return 0;
}