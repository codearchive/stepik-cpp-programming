#include <iostream>

#define MAX(x, y, r) \
do {int first_arg = x; \
	int second_arg = y; \
	r = ((first_arg) > (second_arg) ? (first_arg) : (second_arg)) ;} \
while(0)

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cin >> a >> b;
	MAX(a, b, c);
	cout << "result = " << c;
}