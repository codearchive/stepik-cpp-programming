#include <iostream>

using namespace std;

int myLog(int a) {
	int input_number = 1;
	int power = -1;
	while (input_number <= a) {
		input_number *= 2;
		++power;
	}
	return power;
}

int main() {
	int amount_of_numbers = 0;
	int number = 0;
	cin >> amount_of_numbers;
	while (amount_of_numbers) {
		cin >> number;
		cout << myLog(number) << endl;
		--amount_of_numbers;
	}
	return 0;
}
