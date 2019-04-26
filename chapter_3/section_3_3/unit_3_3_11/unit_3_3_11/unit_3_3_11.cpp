#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

using namespace std;

struct String {
	String(size_t n, char c)
		:size(n)
		,str((char *)memset(new char[n + 1], c, n))
	{}

	~String() {
		delete[] str;
	}

	size_t size;
	char * str;
};

int main()
{
	String str(5, 'a');

	cout << "Size of string: " << str.size << endl;
	cout << "String: " << str.str << endl;

	return 0;
}