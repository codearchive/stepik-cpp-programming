#include <iostream>

using namespace std;

struct Cls {
	Cls(char c, double d, int i) : c(c), d(d), i(i)
	{}
private:
	char c;
	double d;
	int i;
};

char &get_c(Cls &obj_cls)
{
	return *(char *)&obj_cls;
}

double &get_d(Cls &obj_cls) {
	return *((double *)&obj_cls + 1);
}

int &get_i(Cls &obj_cls) {
	return *((int *)&obj_cls + 4);
}

int main()
{
	Cls cls('a', 10.5, 5);
	int & chr = get_i(cls);
	cout << chr << endl;
	return 0;
}