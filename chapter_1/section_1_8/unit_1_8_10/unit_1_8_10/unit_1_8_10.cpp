#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	int a = 0;
	int b = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; ++i)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
	return 0;
}