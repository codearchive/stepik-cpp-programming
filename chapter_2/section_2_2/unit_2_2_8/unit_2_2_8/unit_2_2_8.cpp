#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b) {
	if (a % b == 0) {
		return b;
	}
	else if (b % a == 0) {
		return a;
	}
	else {
		gcd(b, a % b);
	}
}

int main()
{
	unsigned firstVariable = 0.0;
	unsigned secondvariable = 0.0;
	cin >> firstVariable >> secondvariable;
	cout << gcd(firstVariable, secondvariable) << endl;
	return 0;
}