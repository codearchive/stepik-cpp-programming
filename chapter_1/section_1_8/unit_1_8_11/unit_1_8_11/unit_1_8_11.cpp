#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b >> c;
	if (a == 0)
	{
		cout << ((-c) / b) << endl;
		cin >> a;
	}
	else
	{
		double discriminant = b * b - 4 * a * c;
		if (discriminant < 0.0) {
			cout << "No real roots" << endl;
		}
		else {
			double square_root = sqrt(discriminant);
			double denominator = 2 * a;
			cout << (-b - square_root) / denominator << " " << (-b + square_root) / denominator << endl;
			cin >> a;
		}
	}
	return 0;
}