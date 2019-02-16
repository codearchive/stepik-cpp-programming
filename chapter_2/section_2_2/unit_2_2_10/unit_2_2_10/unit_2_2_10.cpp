#include <iostream>

using namespace std;

int recursion() {
	int current_number = 0;
	cin >> current_number;
	if (current_number == 0) {
		return 0;
	}
	else {
		recursion();
	}
	cout << current_number << " ";
}

int main() {
	recursion();
	return 0;
}