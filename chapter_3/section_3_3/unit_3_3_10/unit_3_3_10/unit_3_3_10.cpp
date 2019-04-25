#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

using namespace std;

struct String {
	String(const char *str = "")
		: size(strlen(str))
		, str(strcpy(new char[this->size + 1], str))
	{}

	size_t size;
	char *str;
};

int main()
{
	String str("Hello world!");

	cout << "Size of string: " << str.size << endl;
	cout << "String: " << str.str << endl;
	
	return 0;
}